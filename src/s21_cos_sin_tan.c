#include "s21_math.h"

long double s21_cos(double x) {
  long double res = 0, step = 1;
  double tmp = 0;
  if (x < 0) x *= MINUS;
  for (; tmp * PI_2 <= x; tmp++)
    ;
  tmp--;
  x = x - (tmp * PI_2);
  if (x < 0) x *= MINUS;
  for (long double i = 2; s21_fabs((double)step) >= EPSilon2; i += 2) {
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
  return s21_sqrt(ONE - s21_cos(x) * s21_cos(x)) * flag;
}

long double s21_tan(double x) {
  if (s21_fabs(s21_cos(x)) <= EPSilon) return InFP;
  return s21_sin(x) / s21_cos(x);
}