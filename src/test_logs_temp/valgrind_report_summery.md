./s21_tests 
    Running suite(s): MyMath
    100%: Checks: 157, Failures: 0, Errors: 0


valgrind --tool=memcheck  --leak-check=full --show-leak-kinds=all ./s21_tests
    ...
    ==38505== LEAK SUMMARY:
    ==38505==    definitely lost: 0 bytes in 0 blocks
    ==38505==    indirectly lost: 0 bytes in 0 blocks
    ==38505==      possibly lost: 0 bytes in 0 blocks
    ==38505==    still reachable: 20,472 bytes in 655 blocks
    ==38505==         suppressed: 0 bytes in 0 blocks
    ==38505== 
    ==38505== For lists of detected and suppressed errors, rerun with: -s
    ==38505== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
    96%: Checks: 157, Failures: 6, Errors: 0
    tests.c:28:F:Core:fabs_inf_positive:0: Assertion 's21_fabs(1.0 / 0.0) is infinite' failed: s21_fabs(1.0 / 0.0) == 1.18973e+4932
    tests.c:34:F:Core:fabs_inf_negative:0: Assertion 's21_fabs(-1.0 / 0.0) is infinite' failed: s21_fabs(-1.0 / 0.0) == 1.18973e+4932
    tests.c:73:F:Core:ceil_inf_positive:0: Assertion 's21_ceil(1.0 / 0.0) is infinite' failed: s21_ceil(1.0 / 0.0) == 1.18973e+4932
    tests.c:79:F:Core:ceil_inf_negative:0: Assertion 's21_ceil(-1.0 / 0.0) is infinite' failed: s21_ceil(-1.0 / 0.0) == -1.18973e+4932
    tests.c:111:F:Core:floor_inf_positive:0: Assertion 's21_floor(1.0 / 0.0) is infinite' failed: s21_floor(1.0 / 0.0) == 1.18973e+4932
    tests.c:117:F:Core:floor_inf_negative:0: Assertion 's21_floor(-1.0 / 0.0) is infinite' failed: s21_floor(-1.0 / 0.0) == -1.18973e+4932
    ==38229== 
    ==38229== HEAP SUMMARY:
    ==38229==     in use at exit: 0 bytes in 0 blocks
    ==38229==   total heap usage: 2,045 allocs, 2,045 frees, 2,097,107 bytes allocated
    ==38229== 
    ==38229== All heap blocks were freed -- no leaks are possible
    ==38229== 
    ==38229== For lists of detected and suppressed errors, rerun with: -s
    ==38229== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)



Update:

valgrind --tool=memcheck  --leak-check=full --show-leak-kinds=all ./s21_tests
    ...
    ==41439== 
    ==41439== LEAK SUMMARY:
    ==41439==    definitely lost: 0 bytes in 0 blocks
    ==41439==    indirectly lost: 0 bytes in 0 blocks
    ==41439==      possibly lost: 0 bytes in 0 blocks
    ==41439==    still reachable: 19,968 bytes in 655 blocks
    ==41439==         suppressed: 0 bytes in 0 blocks
    ==41439== 
    ==41439== For lists of detected and suppressed errors, rerun with: -s
    ==41439== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
    100%: Checks: 157, Failures: 0, Errors: 0
    ==41265== 
    ==41265== HEAP SUMMARY:
    ==41265==     in use at exit: 0 bytes in 0 blocks
    ==41265==   total heap usage: 2,027 allocs, 2,027 frees, 2,094,673 bytes allocated
    ==41265== 
    ==41265== All heap blocks were freed -- no leaks are possible
    ==41265== 
    ==41265== For lists of detected and suppressed errors, rerun with: -s
    ==41265== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
