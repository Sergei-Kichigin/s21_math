1)*_notused - extra not used functions - take them if you need (don't forge to rename the foulder).


LIST OF GOALS:
| 1 | `int abs(int x)` | вычисляет абсолютное значение целого числа | DONE | NOT CHECKED
НАстя-----| 2 | `long double acos(double x)` | вычисляет арккосинус |  NOT DONE | NOT CHECKED
НАстя-----| 3 | `long double asin(double x)` | вычисляет арксинус |  NOT DONE | NOT CHECKED 
Настя-----| 4 | `long double atan(double x)` | вычисляет арктангенс |  NOT DONE | NOT CHECKED
| 5 | `long double ceil(double x)` | возвращает ближайшее целое число, не меньшее заданного значения | DONE | NOT CHECKED
| 6 | `long double cos(double x)` | вычисляет косинус | DONE | CHECKED +(need EXTRA check near 2*PI)
| 7 | `long double exp(double x)` | возвращает значение e, возведенное в заданную степень | DONE | BUG FOUND
| 8 | `long double fabs(double x)` | вычисляет абсолютное значение числа с плавающей точкой | DONE | CHECKED
| 9 | `long double floor(double x)` | возвращает ближайшее целое число, не превышающее заданное значение | DONE | NOT CHECKED
| 10 | `long double fmod(double x, double y)` | остаток операции деления с плавающей точкой | DONE | NOT CHECKED
| 11 | `long double log(double x)` | вычисляет натуральный логарифм | DONE | NOT CHECKED
| 12 | `long double pow(double base, double exp)` | возводит число в заданную степень | DONE | NOT CHECKED   +(small numbers like 0.0000000000009 doesn't work (with rational powers at least (ex. 0.5)) I wonder where is the edge  - BUG**)
Гоша------| 13 | `long double sin(double x)` | вычисляет синус |
| 14 | `long double sqrt(double x)` | вычисляет квадратный корень | DONE | BUG FOUND*
Гоша------| 15 | `long double tan(double x)` | вычисляет тангенс |  
Сергей----gcov_report
Unit-тесты
Решить про объединения функций

* BUG log:
16 0.25
2.0000000000000000
2.0000000000000000

16 0.5
4.0000000000000000
3.9999999999999998

64 0.125
1.6817928305074290
1.6817928305074290

9
0.33333333333333333333333333333333
2.0800838230519041
2.0800838230519041

27 0.3333333333333333333333333333333
3.0000000000000000
2.9999999999999996

sum: problem with calculation of EXP due to the fact that the ROW grows from bottom to the number.
sol?: make 2 functions for big and small number - small numbers work with constan, not ROW

** BUG log:
0.1 0.5
0.3162277660168379
0.3162277660168379

0.001 0.5
0.0316227766016838
0.0316227766016838

0.0001 0.5
0.0100000000000000
0.0099999999999995

0.00001 0.5 
0.0031622776601684
0.0031622776601613

0.000001 0.5
0.0003162277660168
//too slowly

sum: pow (and sqrt) are too slowly with small numbers