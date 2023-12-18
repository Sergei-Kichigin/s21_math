# Tests

Для запуска тестов используйте команду: 
```make test```
Отчет покрытия: 
```make report```
Отчет в формате html: 
```make coverage_report```

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
| 13 | `long double sin(double x)` | вычисляет синус |
| 14 | `long double sqrt(double x)` | вычисляет квадратный корень | DONE | BUG FOUND*
| 15 | `long double tan(double x)` | вычисляет тангенс |  
Сергей----gcov_report
Unit-тесты
Решить про объединения функций
