#include "s21_fmod.h"

long double s21_fmod(double x, double y) {
  if (y == 0) return NaN;
  while (x >= y) {
    x -= y;
  }
  return x;
}