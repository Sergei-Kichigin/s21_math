#ifndef FMOD
#define FMOD

#ifndef CONST
#include "../constants.h"
#endif

#ifndef S21_AFACFL
#include "../abs_fabs_ceil_floor/s21_abs_fabs_ceil_floor.h"
#endif

long double s21_fmod(double x, double y);
long double s21_truncate(double x);
long double s21_fma(long double x, long double y, long double z);
#endif
