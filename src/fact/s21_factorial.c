#include "s21_factorial.h"

long double fact(int x) {
  if (x == 0)
    return 1;
  else
    return (long double)x * fact(x - 1);
}