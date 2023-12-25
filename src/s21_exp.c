#include "s21_math.h"

long double s21_exp(double x) {
  long double res = ONE;
  if (x == InFN)
    res = ZERO;
  else {
    if (x > ZERO) {
      res = s21_exp_double(x);
    } else {
      res = s21_pow_int(Emathh, (long long)x);
      res *= s21_exp_double(x - (long long)x);
    }
    if (res > __DBL_MAX__) res = InFP;
  }
  return res;
}
long double s21_exp_double(double x) {
  long double cur = ONE;
  long double add = ONE;
  double i = ONE;
  while (s21_fabs(add) > EPSilon) {
    add = add * x / i;
    cur = cur + add;
    i++;
    if (cur > __DBL_MAX__) break;
  }
  return cur;
}
