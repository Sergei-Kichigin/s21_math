Checking s21_abs_fabs_ceil_floor.c ...
1/9 files checked 1% done
Checking s21_acos_asin_atan.c ...
2/9 files checked 3% done
Checking s21_cos_sin_tan.c ...
3/9 files checked 7% done
Checking s21_exp.c ...
4/9 files checked 8% done
Checking s21_fmod.c ...
5/9 files checked 9% done
Checking s21_ln.c ...
s21_ln.c:4:15: style: The scope of the variable 'prev' can be reduced. [variableScope]
  long double prev = ZERO, cur = ZERO;
              ^
6/9 files checked 10% done
Checking s21_math.h ...
7/9 files checked 13% done
Checking s21_pow_sqrt.c ...
8/9 files checked 16% done
Checking tests.c ...
tests.c:296:26: error: Invalid acos() argument nr 1. The value is 1.000001 but the valid values are '-1.0:1.0'. [invalidFunctionArg]
  double expected = acos(input);
                         ^
tests.c:294:19: note: Assignment 'input=1.000001', assigned value is 1.000001
  double input = 1.000001;
                  ^
tests.c:296:26: note: Invalid argument
  double expected = acos(input);
                         ^
tests.c:339:26: error: Invalid acos() argument nr 1. The value is -9999999999 but the valid values are '-1.0:1.0'. [invalidFunctionArg]
  double expected = acos(input);
                         ^
tests.c:337:19: note: Assignment 'input=-9999999999', assigned value is -9999999999
  double input = -9999999999;
                  ^
tests.c:339:26: note: Invalid argument
  double expected = acos(input);
                         ^
tests.c:372:26: error: Invalid asin() argument nr 1. The value is 1.000001 but the valid values are '-1.0:1.0'. [invalidFunctionArg]
  double expected = asin(input);
                         ^
tests.c:370:19: note: Assignment 'input=1.000001', assigned value is 1.000001
  double input = 1.000001;
                  ^
tests.c:372:26: note: Invalid argument
  double expected = asin(input);
                         ^
tests.c:415:26: error: Invalid asin() argument nr 1. The value is -9999999999 but the valid values are '-1.0:1.0'. [invalidFunctionArg]
  double expected = asin(input);
                         ^
tests.c:413:19: note: Assignment 'input=-9999999999', assigned value is -9999999999
  double input = -9999999999;
                  ^
tests.c:415:26: note: Invalid argument
  double expected = asin(input);
                         ^
tests.c:797:25: error: Invalid log() argument nr 1. The value is -12 but the valid values are '4.94066e-324:'. [invalidFunctionArg]
  double expected = log(input);
                        ^
tests.c:795:19: note: Assignment 'input=-12', assigned value is -12
  double input = -12;
                  ^
tests.c:797:25: note: Invalid argument
  double expected = log(input);
                        ^
tests.c:804:25: error: Invalid log() argument nr 1. The value is 0 but the valid values are '4.94066e-324:'. [invalidFunctionArg]
  double expected = log(input);
                        ^
tests.c:802:19: note: Assignment 'input=0.0', assigned value is 0.0
  double input = 0.0;
                  ^
tests.c:804:25: note: Invalid argument
  double expected = log(input);
                        ^
9/9 files checked 100% done
Active checkers: 132/565
