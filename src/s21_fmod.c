#ifndef FMOD
#define FMOD

#ifndef CONST
#include "../constants.h"
#endif

#ifndef S21_AFACFL
#include "../abs_fabs_ceil_floor/s21_abs_fabs_ceil_floor.h"
#endif

long double s21_fmod(double x, double y);
long double s21_truncate(double x);
#endif


long double s21_fmod(double x, double y) {
  if (y == 0 || s21_fabs(x) == InFP) return NaN;
  long double res = 0;
  if (s21_fabs(y) == InFP) {
    res = x;
  } else {
    long double temp = s21_truncate(x / y);
    res = (long double)x - temp * (long double)y;
  }
  return res;
}

long double s21_truncate(double x) {
  return x < 0 ? -s21_floor(-x) : s21_floor(x);
}
