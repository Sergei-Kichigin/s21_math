#include "s21_exp.h"

long double s21_exp(double x) {
  double i = 0;
  long double res;
  if (x == (long int)x)
    res = s21_pow_int(Emathh, x);
  else {
    if (x >= 0)
      for (; i <= x; i++)
        ;
    else
      for (; i >= x; i--)
        ;
    res = s21_pow_int(Emathh, i);
    res = res * s21_exp_double(x - i);
  }
  return res;
}

long double s21_exp_double(double x) {
  long double U_n = 1;
  long double U_n_1 = 1;
  int i = 1;
  while ((U_n_1 >= 0 ? U_n_1 : -U_n_1) > EPSilon) {
    U_n_1 = U_n_1 * x / i;
    U_n = U_n + U_n_1;
    i++;
  }
  return U_n;
}
