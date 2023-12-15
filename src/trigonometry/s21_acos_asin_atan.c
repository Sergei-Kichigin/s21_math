#include "s21_acos_asin_atan.h"

long double s21_acos(double x) {
  if (s21_abs(x) > 1) return NaN;
  return (double)(PI / 2.0 - s21_asin(x));
}

long double s21_asin(double x) {
  if (s21_abs(x) > 1) return NaN;

  long double res = 0;
  long double flag = 0;
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

long double s21_atan(double x) {
  long double res = 0;
  res = 1.0 / s21_sqrt(1.0 + x * x);
  if (s21_abs(x) >= 1) {
    res = s21_acos((double)(res));
    if (x < 0) res *= -1.0;
  } else
    res = s21_asin((double)(x * res));
  return res;
}

/*Problems:
1. Долго считает 9999999999.999999
1. #include & #define -> #include "s21_acos_asin_atan.h"
2. #define NaN1 -(0.0 / 0.0)  sign-  ??? -> nan
*/