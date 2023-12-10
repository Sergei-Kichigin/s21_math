#include "s21_exp.h"

long double s21_exp(double x) {
  long double U_n = 1;
  long double U_n_1 = 1;
  int i = 1;
  while (s21_fabs(U_n_1) > 1E-18) {
    U_n_1 = U_n_1 * x / i;
    U_n = U_n + U_n_1;
    i++;
  }
  return U_n;
}
