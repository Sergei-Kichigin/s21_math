#include <math.h>
#include <stdio.h>

#include "s21_math.h"
#define NA printf("n/a")

// int main() { printf("%.100lf", pow(exp(100), (double)1 / 100)); }

// #define MOD (long long)10e18

// long double bin_pow(long double base, long double p);
// long double pnorm(long double in);

// int main() {
//   long double in, times, res;

//   while (in != -5) {
//     scanf("%Lf%Lf", &in, &times);
//     res = bin_pow(in, times);
//     printf("%.20Lf\n", res);
//   }
// }

// long double bin_pow(long double base, long double p) {
//   if (p == 0) {
//     return 1;  // Выход из рекурсии.
//   }
//   if (p > 0) {
//     if (p == (long long)p && (long long)p % 2 == 0) {
//       long double t = bin_pow(base, p / 2);
//       return pnorm(t * t);
//     } else {
//       return pnorm(bin_pow(base, p - 1) * base);
//     }
//   } else {
//     return pnorm(bin_pow(base, p + 1) / base);
//   }
// }
// long double pnorm(long double in) {
//   long long tmp = (long long)in;
//   return (in >= 0) ? tmp % MOD + in - tmp : ((-tmp) % MOD - in + tmp) * (-1);
// }

int main() {
  long double in, times, res;

  scanf("%lf", &input1);
  if (input1 == 12345 || input1 == 54321) continue;
  scanf("%lf", &input2);
  printf("%.16lf\t%.6lf\n", fmod(input1, input2), fmod(input1, input2));
  printf("%.16Lf\t%.6Lf\n\n", s21_fmod(input1, input2),
         s21_fmod(input1, input2));
}