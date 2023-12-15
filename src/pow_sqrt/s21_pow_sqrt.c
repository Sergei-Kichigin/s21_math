#include "s21_pow_sqrt.h"

long double s21_pow(double base, double p) {
  if (p == (long int)p)
    return s21_pow_int(base, p);
  else
    return s21_pow_double(base, p);
}
long double s21_pow_int(long double base, long double p) {
  // printf("%Lf\n", p);
  // if (p == 0) {
  //   return ONE;  // Выход из рекурсии.
  // }
  // if (p > 0) {
  //   if ((long long)p % 2 == 0) {
  //     long double t = s21_pow_int(base, p / 2.0);
  //     return t * t;
  //   } else {
  //     return s21_pow_int(base, p - ONE) * base;
  //   }
  // } else {
  //   return s21_pow_int(base, p + ONE) / base;
  // }
  long double result = ONE;
  for (; p != 0;) {
    if (p > 0) {
      result *= base;
      p--;
    } else {
      result /= base;
      p++;
    }
  }
  return result;
}
long double s21_pow_double(double base, double p) {
  long double result;
  if (base > 0)
    result = s21_pow_calculation(base, p);
  else if (base < 0) {
    if (p == 0)
      result = ONE;
    else
      result = NaN;
  } else {
    if (p > 0)
      result = ZERO;
    else if (p == 0)
      result = ONE;
    else
      result = InF;
  }
  return result;
}

long double s21_pow_calculation(double base, double p) {
  long double res;
  res = s21_exp(p * s21_log(base));
  return res;

  // double i = 0;
  // for (; i <= p; i++)
  //   ;
  //  long double res = s21_pow_int(base, i);
  //  res = res * s21_exp((p - i) * s21_log(base));
  //  return res;
  //  return s21_exp(p * s21_log(base));
}

long double s21_sqrt(double base) { return s21_pow_double(base, SQRT); }

// long double not_a_crutch(long double x) {
//   long int temp;
//   temp = x * 1000000000;

//   if ((x - (double)temp) * 10 >= 5)
//     return x + 0.000000001;
//   else
//     return x;
// }
