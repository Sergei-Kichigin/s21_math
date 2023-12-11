#ifndef POW
#define POW

#ifndef S21_AFACFL
#include "s21_abs_fabs_ceil_floor.h"
#endif

#ifndef LN
#include "s21_ln.h"
#endif

#ifndef EXP
#include "s21_exp.h"
#endif

#ifndef CONST
#include "constants.h"
#endif

long double s21_pow(double base, double p);
long double s21_pow_calculation(double base, double p);
long double s21_pow_int(long double base, long double p);
long double s21_pow_double(double base, double p);
long double s21_sqrt(double base);
#endif