#include "s21_acos_asin_atan.h"

long double s21_acos(double x) {
  if (s21_abs(x) > 1) return NaN;
  return (double)(PI / 2.0 - s21_asin(x));
}

long double s21_asin(double x) {
  if (s21_abs(x) > 1) return NaN;
  long double res = 0, step = x;
  for (long double i = 1; s21_fabs((double)step) >= EPSilon; i += 2) {
    res += step;
    step = step * x * x * i * i / ((i + 1.0) * (i + 2.0));
  }
  return res;
}
