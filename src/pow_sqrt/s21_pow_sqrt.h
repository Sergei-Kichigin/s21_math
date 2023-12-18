#ifndef POW
#define POW

#ifndef S21_AFACFL
#include "../abs_fabs_ceil_floor/s21_abs_fabs_ceil_floor.h"
#endif

#ifndef LN
#include "../ln/s21_ln.h"
#endif

#ifndef EXP
#include "../exp/s21_exp.h"
#endif

#ifndef CONST
#include "../constants.h"
#endif

long double s21_pow(double base, double p);
long double s21_pow_calculation(double base, long double p);
long double s21_pow_int(long double base, long double p);
long double s21_pow_double(double base, double p);
long double s21_sqrt(double base);
#endif