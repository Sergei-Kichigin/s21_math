#ifndef ACOS
#define ACOS

#ifndef CONST
#include "../constants.h"
#endif

#ifndef S21_AFACFL
#include "../abs_fabs_ceil_floor/s21_abs_fabs_ceil_floor.h"
#endif

#ifndef POW
#include "../pow_sqrt/s21_pow_sqrt.h"
#endif

long double s21_acos(double x);
long double s21_asin(double x);
long double s21_atan(double x);

#endif