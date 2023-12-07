#include "s21_exp.h"

// long double exp_my(double x) {  // just lets move 5 discharges
//   long double res = 1, elem = 0;
//   unsigned long n = 1;
//   do {
//     elem = (long double)pow(x, n) / (long double)fact(n);
//     n++;
//     res = res + elem;
//     // printf("-%Lf-%Lf=%lf\n", elem, prev_elem, fabs((double)(elem -
//     // prev_elem)));
//     //   } while (fabs((double)elem) >= DELTA);
//     // printf("%ld\n", n);
//   } while (n < INT_MAX && fabs((double)elem) >= DELTA);
//   // res = res / MOVE;
//   return res;
// }

// long double exp_my(double x) {
//   return (long double)pow(E50, x) / pow((long double)MOVE, x);
// }

long double exp_my(double x) { return (long double)pow(Emathh, x); }
// long double exp_my(double x) {
//   x--;
//   if (x == 0)
//     return Emathh;
//   else
//     return Emathh * exp_my(x);
// }