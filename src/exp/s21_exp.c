#include "s21_exp.h"

long double s21_exp(double x) {
  long double res = ONE;
  if (x == InF) res = ZERO;
  if (x == -InF) res = x;
  if (res == ONE) {
    if (x > ZERO) {
      res = s21_exp_double(x);
    } else if (x > -2147483647) {
      res = s21_pow_int(Emathh, (long long)x);
      res *= s21_exp_double(x - (long long)x);
    } else
      res = ZERO;
    // if (res < __DBL_DENORM_MIN__) res = ZERO; // write it down (riderrki for
    // riderkri)
    if (res > __DBL_MAX__) res = -InF;  // write it down (riderrki for riderkri)
  }
  return res;
}

long double s21_exp_double(double x) {
  long double U_n = ONE;
  long double U_n_1 = ONE;
  double i = ONE;
  while (s21_fabs(U_n_1) > EPSilon) {
    U_n_1 = U_n_1 * x / i;
    U_n = U_n + U_n_1;
    i++;
    if (U_n > __DBL_MAX__) break;
  }
  return U_n;
}
