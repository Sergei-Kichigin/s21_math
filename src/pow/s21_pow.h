#include <stdio.h>

#include "../abs_fabs_ceil_floor/s21_abs_fabs_ceil_floor.h"
#include "../exp/s21_exp.h"
#include "../ln/s21_ln.h"

#define NaN 0.0 / 0.0
#define InF -1.0 / 0.0
#define ONE 1.0
#define ZERO 0.0

long double s21_pow(double base, double p);
long double s21_pow_calculation(double base, double p);