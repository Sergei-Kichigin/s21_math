
#include "s21_pow_sqrt.h"

// bug with EXP and LOG calculation effects this function
// try 25 0.5, you will get 4.99999999999998 and that is fucked up
// same goes with 27 0.3333333333333 and so on
// btw it effects SQRT too

long double s21_pow(double base, double p) {
  if (p == (long int)p)
    return s21_pow_int(base, p);
  else
    return s21_pow_double(base, p);
}
long double s21_pow_int(long double base, long double p) {
  if (p == 0) {
    return ONE;  // Выход из рекурсии.
  }
  if (p > 0) {
    if (p == (long long)p && (long long)p % 2 == 0) {
      long double t = s21_pow_int(base, p / 2.0);
      return t * t;
    } else {
      return s21_pow_int(base, p - ONE) * base;
    }
  } else {
    return s21_pow_int(base, p + ONE) / base;
  }
}
long double s21_pow_double(double base, double p) {
  long double result;
  if (base > 0)
    result = s21_pow_calculation(base, p);
  else if (base < 0) {
    if (p == 0)
      result = ONE;
    else if (p != (long int)p)
      result = NaN;
    else if ((long int)p % 2 == 0)
      result = s21_pow_calculation(s21_fabs(base), p);
    else
      result = s21_pow_calculation(s21_fabs(base), p) * (-1);
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
  return s21_exp(p * s21_log(base));
}

long double s21_sqrt(double base) { return s21_pow_double(base, SQRT); }