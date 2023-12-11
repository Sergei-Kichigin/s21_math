#include "s21_exp.h"

#include "s21_abs_fabs_ceil_floor.h"

long double s21_exp(double x) {
  // double i = 0;
  long double res;
  if (x == (long int)x)
    res = s21_pow_int(Emathh, x);
  else {
    // if (x >= 0)
    //   for (; i <= x; i++)
    //     ;
    // else
    //   for (; i >= x; i--)
    //     ;
    // res = s21_pow_int(Emathh, i);
    // res = res * s21_exp_double(x - i);
    res = s21_pow_int(Emathh, (long int)x);
    res *= s21_exp_double(x - (long int)x);
  }
  return res;
}

long double s21_exp_double(double x) {
  long double U_n = 1.0;
  long double U_n_1 = 1.0;
  double i = 1.0;
  while (s21_fabs(U_n_1) > EPSilon) {
    U_n_1 = U_n_1 * x / i;
    U_n = U_n + U_n_1;
    i++;
  }
  return U_n;
}
