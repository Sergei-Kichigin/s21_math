#include "s21_cos_sin_tan.h"

#include "constants.h"
#include "s21_abs_fabs_ceil_floor.h"
#include "s21_pow_sqrt.h"

long double s21_cos(double x) {
  long double res = 0, step = 1;
  double tmp = 0;
  if (x < 0) x *= MINUS;
  for (; tmp * PI_2 <= x; tmp++)
    ;
  tmp--;
  x = x - (tmp * PI_2);
  if (x < 0) x *= MINUS;
  for (long double i = 2; s21_fabs((double)step) >= EPSilon; i += 2) {
    res += step;
    step = MINUS * step * x * x / (i * (i - ONE));
  }
  return res;
}

long double s21_sin(double x) {
  double tmp = 0;
  long double flag;
  if (x >= 0) {
    for (; tmp * PI_2 <= x; tmp++)
      ;
    tmp--;
    x = x - (tmp * PI_2);
    if (x <= PI)
      flag = ONE;
    else
      flag = MINUS;
  } else {
    for (; tmp * PI_2 * MINUS >= x; tmp++)
      ;
    tmp--;
    x = x + (tmp * PI_2);
    if (x <= PI * MINUS)
      flag = ONE;
    else
      flag = MINUS;
  }
  // long double res = 0;
  // res = s21_fabs(s21_cos(x));
  // if (1 - res < 0.00001)
  //   res = (ONE - res) * flag;
  // else
  //   res = s21_sqrt(ONE - s21_pow(res, 2)) * flag;
  // return res;
  return s21_sqrt(ONE - s21_cos(x) * s21_cos(x)) * flag;
}

long double s21_tan(double x) {  // error with INF here!!!!
  if (s21_fabs(s21_cos(x)) <= EPSilon) return InFP;
  return s21_sin(x) / s21_cos(x);
}