#include "s21_fmod.h"

long double s21_fmod(double x, double y) {
  while (x >= y) {
    x -= y;
  }
  return x;
}