#define _POSIX_C_SOURCE 200809L
#include <limits.h>
#include <stdio.h>

#include "../fact/s21_factorial.h"

// #include "s21_pow.h"
#include <math.h>  ///for    --    pow

#define MOVE 100000
#define DELTA 0.00000000000000000001
#define MOD_DELTA 0.000000000000001
// presision: 20 => 0.00000000000000000001
//(long double 10/3==3.33333333333333333326)

long double exp_my(double x);  // rename the function
