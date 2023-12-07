CC=gcc
CFLAGS= -std=c11 -Wall -Werror -Wextra -c
OFLAG= -o
SRCCOS=../src/cos/
SRCEXP=../src/exp/
SRCFACT=../src/fact/
CL=../materials/linters/.clang-format
CP=cp

# all: s21_math.h  #need to remember how mo make libs
# s21_math.h: 

test_riderkri:  clang_all s21_exp.o s21_factorial.o test_riderkri.o #s21_cos.o 
	$(CC) s21_factorial.o s21_exp.o test_riderkri.o $(OFLAG) test_riderkri

test_riderkri.o: test_riderkri.c
	$(CC) $(CFLAGS) test_riderkri.c 

s21_cos.o: $(SRCCOS)s21_cos.c $(SRCCOS)s21_cos.h
	$(CC) $(CFLAGS) $(SRCCOS)s21_cos.c $(SRCCOS)s21_cos.h

s21_exp.o: $(SRCEXP)s21_exp.c $(SRCEXP)s21_exp.h
	$(CC) $(CFLAGS) $(SRCEXP)s21_exp.c $(SRCEXP)s21_exp.h
	
s21_factorial.o: $(SRCFACT)s21_factorial.c $(SRCFACT)s21_factorial.h
	$(CC) $(CFLAGS) $(SRCFACT)s21_factorial.c $(SRCFACT)s21_factorial.h 

clang_all: 
	$(CP) $(CL) .clang-format
	$(CP) $(CL) $(SRCCOS).clang-format
	$(CP) $(CL) $(SRCEXP).clang-format
	$(CP) $(CL) $(SRCFACT).clang-format
	clang-format -i *.c
	clang-format -i *.h
	clang-format -i $(SRCCOS)*.c
	clang-format -i $(SRCCOS)*.h
	clang-format -i $(SRCEXP)*.c
	clang-format -i $(SRCEXP)*.h
	clang-format -i $(SRCFACT)*.c
	clang-format -i $(SRCFACT)*.h
	rm -f .clang-format
	rm -f $(SRCCOS).clang-format
	rm -f $(SRCEXP).clang-format
	rm -f $(SRCFACT).clang-format

clear_test: clear_o clear_test

clear_o:
	rm -f *.o
	rm -f $(SRCCOS)*.o
	rm -f $(SRCEXP)*.o
	rm -f $(SRCFACT)*.o

clear_test: clear_o
	rm -f test_riderkri

rebuild_test: clear test_riderkri
