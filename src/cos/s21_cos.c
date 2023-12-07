#include "s21_cos.h"

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