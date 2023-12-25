#include "s21_math.h"

long double s21_pow(double base, double p) {
  long double result = TWO;
  if (p == InFN || p == InFP) {
    if (base < MINUS || base > ONE)
      result = (p == InFN ? ZERO : InFP);
    else if (base > MINUS && base < ONE)
      result = (p == InFN ? InFP : ZERO);
    else if (base == MINUS || base == ONE)
      result = ONE;
  }
  if (result == TWO && (base == InFP || base == InFN)) {
    if (p > ZERO)
      result = InFP;
    else if (p < ZERO && p != MINUS)
      result = ZERO;
    else if (p == MINUS)
      result = (base == InFP ? ZERO : ZERON);
    else
      result = ONE;
  }
  if (result == TWO) {
    result = s21_pow_double(base, p);
    if (result > __DBL_MAX__) result = InFP;
    if (result < MINUS * __DBL_MAX__) result = InFN;
  }
  if (p != p) {
    result = (base == ONE ? base : p);
  }
  if (base != base) result = base;
  return result;
}

long double s21_pow_int(long double base, long double p) {
  long double result = ONE;
  int flag_even = 0;
  if ((long long)p % 2 == 0) flag_even = 1;
  if (base == 0 && p != 0) {
    if (p > 0)
      result = ZERO;
    else
      result = InFP;
  } else if (base != ONE) {
    if (base == MINUS) {
      if (!flag_even) result = MINUS;
    } else {
      for (; p != 0;) {
        if (p > 0) {
          result *= base;
          p--;
        } else {
          result /= base;
          p++;
        }

        if (result > __DBL_MAX__) {
          if (base < 0 && !flag_even)
            result = InFN;
          else
            result = InFP;
          p = 0;
        } else if (result < __DBL_MAX__ * MINUS) {
          if (flag_even)
            result = InFP;
          else
            result = InFN;
          p = 0;
        } else if (result < __DBL_DENORM_MIN__ && result > 0) {
          if (base < 0 && !flag_even)
            result = ZERON;
          else
            result = ZERO;
          p = 0;
        } else if (result > __DBL_DENORM_MIN__ * MINUS && result < 0) {
          if (flag_even)
            result = ZERO;
          else
            result = ZERON;
          p = 0;
        }
      }
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
    else {
      if (p == (long int)p) {
        result = s21_pow_calculation(base * MINUS, p);
        if ((long int)p % 2 != 0) result *= MINUS;
      } else
        result = NaN;
    }
  } else {
    if (p > 0)
      result = ZERO;
    else if (p == 0)
      result = ONE;
    else
      result = InFP;
  }
  return result;
}

long double s21_pow_calculation(double base, long double p) {
  long double res;
  res = s21_exp(p * s21_log(base));
  return res;
}

long double s21_sqrt(double base) { return s21_pow(base, SQRT); }