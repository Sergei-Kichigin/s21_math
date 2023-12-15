#include "s21_exp.h"

long double s21_exp(double x) {
  long double res;
  if (x > ZERO)
    res = s21_exp_double(x);
  else {
    res = s21_pow_int(Emathh, (long int)x);
    res *= s21_exp_double(x - (long int)x);
  }
  if (res > __DBL_MAX__) {            //write it down
    res = -InF;
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
  }
  return U_n;
}
