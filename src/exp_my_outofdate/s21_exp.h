#define _POSIX_C_SOURCE 200809L
#include <limits.h>
#include <stdio.h>

// #include "s21_pow.h"
#include <math.h>  ///for    --    pow

#define Eactual 2.7182818284590452353602874713526624977572470936999595
#define Emathh 2.7182818284590450907955982984276488423347473144531250
#define E50 27182818284.590450907955982984276488423347473144531250
#define MOVE 10000000000.0
// #include "../fact/s21_factorial.h"
// #define MOVE 100000
// #define DELTA 0.00000000000000000001
// #define MOD_DELTA 0.000000000000001
// // presision: 20 => 0.00000000000000000001
// //(long double 10/3==3.33333333333333333326)

long double exp_my(double x);  // rename the function
