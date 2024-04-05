# Used formulas

COS calculation formula:

![step = MINUS * step * x * x / (i * (i - ONE))](../misc/COS.gif?raw=true "cos")

EXP calculation formula:

![add = add * x / i](../misc/EXP.gif?raw=true "exp")

LN (LOG) calculation formula:

![cur = cur + TWO * (x - s21_exp(cur)) / (x + s21_exp(cur))](../misc/LN.gif?raw=true "ln (log)")

POW calculation formula:

![res = s21_exp(p * s21_log(base))](../misc/POW.png?raw=true "pow")

ARCCOS calculation formula:

![res = (PI / 2.0 - s21_asin(x))](../misc/ARCCOS.png?raw=true "arccos")

ARCSIN calculation formula:

![step = step * x * x * i * i / ((i + 1.0) * (i + 2.0))](../misc/ARCSIN_1.png?raw=true "arcsin")

![step = step * x * x * i * i / ((i + 1.0) * (i + 2.0))](../misc/ARCSIN_2.png?raw=true "arcsin")

ARCTAN calculation formula:

![res = 1.0 / s21_sqrt(1.0 + x * x)](../misc/ARCTAN.png?raw=true "arctan")
