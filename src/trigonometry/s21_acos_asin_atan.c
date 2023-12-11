#include "s21_acos_asin_atan.h"

#include "../abs_fabs_ceil_floor/s21_abs_fabs_ceil_floor.h"
#include "../pow_sqrt/s21_pow_sqrt.h"

#define NaN1 -(0.0 / 0.0)
#define MINUS (-1.0)

long double s21_acos(double x) {
  if (s21_abs(x) > 1) return NaN1;
  return (double)(PI / 2.0 - s21_asin(x));
}

/// 1

long double s21_asin(double x) {
  if (s21_abs(x) > 1) return NaN1;

  long double res = 0;
  long double flag;
  if (x > 0)
    flag = ONE;
  else
    flag = MINUS;

  if (s21_abs(x) < 0.9) {
    long double step = x;
    for (long double i = 1; s21_fabs((double)step) >= EPSilon; i += 2) {
      res += step;
      step = step * x * x * i * i / ((i + 1.0) * (i + 2.0));
    }
  } else {  /// |x| >= 0.9
    res = flag * s21_acos(s21_sqrt(1 - x * x));
  }

  return res;
}

// asin(1)

long double s21_atan(double x) {
  long double res;
  /*
  if (x > 10000)
    res = x;
  else
  */
  res = s21_sqrt(1 + x * x);
  return s21_asin((double)(x / res));
}

/*Problem:

1. #include & #define -> #include "s21_acos_asin_atan.h"
2. #define NaN1 -(0.0 / 0.0)  sign-  ??? -> nan
3. atan - 1000 - долго считает -> 
  a) починить корень?
  b) распиcать s21_asin? чтобы не терять точность?
*/