#include "s21_factorial.h"

long double s21_fact(int x) {
  if (x == 0)
    return 1;
  else
    return (long double)x * s21_fact(x - 1);
}