#ifndef EXP
#define EXP

#ifndef CONST
#include "../constants.h"
#endif

#ifndef S21_AFACFL
#include "../abs_fabs_ceil_floor/s21_abs_fabs_ceil_floor.h"
#endif
long double s21_pow_int(long double base, long double p);  // is it working?

long double s21_exp(double x);
long double s21_exp_double(double x);

#endif



long double s21_exp(double x) {
  long double res = ONE;
  if (x == InFN) res = ZERO;
  if (x == InFP) res = x;
  if (res == ONE) {
    if (x > ZERO) {
      res = s21_exp_double(x);
    } else {
      res = s21_pow_int(Emathh, (long long)x);
      res *= s21_exp_double(x - (long long)x);
    }
    // if (res < __DBL_DENORM_MIN__) res = ZERO; // write it down (riderrki for
    // riderkri)
    if (res > __DBL_MAX__) res = InFP;  // write it down (riderrki for riderkri)
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
