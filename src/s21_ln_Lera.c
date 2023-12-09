#include "s21_ln_Lera.h"

#include "s21_exp.h"

long double s21_ln_Lera(double x) {
  if (x < 0) return 0.0 / 0.0;
  if (x == 0) return -1.0 / 0.0;
  long double power = 0;
  for (; x / s21_exp(power) > 1; power++)
    ;
  if (power != 0) x /= s21_exp(power);
  long double U_n_1 = 0, U_n = x;
  while (((U_n - U_n_1) >= 0 ? (U_n - U_n_1) : -(U_n - U_n_1)) > 1E-9) {
    U_n_1 = U_n;
    U_n = U_n + 2 * (x - s21_exp(U_n)) / (x + s21_exp(U_n));
  }
  return power + U_n;
}

// long double s21_ln_Lera(double x) {
//   long double U_n_1 = -1, U_n = 0;
//   while (((U_n - U_n_1) >= 0 ? (U_n - U_n_1) : -(U_n - U_n_1)) > 1E-8) {
//     U_n_1 = U_n;
//     U_n = U_n + 2 * (x - s21_exp(U_n)) / (x + s21_exp(U_n));
//   }
//   printf("%d\n", i);
//   return U_n;
// }