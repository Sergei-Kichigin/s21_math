CC=gcc
CFLAGS= -std=c11 -Wall -Werror -Wextra -c
OFLAG= -lm -o
DFLAG= -D_POSIX_C_SOURCE=200809L
#SRCCOS=../src/cos/s21_cos
SRCLN=ln/
LN=s21_ln
SRCAFACFL=abs_fabs_ceil_floor/
AFACFL=s21_abs_fabs_ceil_floor
SRCPOW=pow/
POW=s21_pow
SRCEXP=exp/
EXP=s21_exp
#SRCFACT=fact/s21_factorial
SRCTESTS=tests/
TESTS=s21_test_riderkri
CL=../materials/linters/.clang-format
CF=clang-format
MATH=s21_math.h
CP=cp
# all: s21_math.h  #need to remember how mo make libs
# s21_math.h: 


test_riderkri:  clang_all $(AFACFL).o $(EXP).o  $(LN).o $(POW).o $(TESTS).o #s21_cos.o s21_factorial.o
	$(CC) $(AFACFL).o $(EXP).o  $(LN).o $(POW).o $(TESTS).o $(OFLAG) $(TESTS)
	rm -f *.o

$(TESTS).o: $(SRCTESTS)$(TESTS).c
	$(CC) $(CFLAGS) $(DFLAG) $(SRCTESTS)$(TESTS).c

# s21_cos.o: $(SRCCOS).c  $(SRCCOS).h
# 	$(CC) $(CFLAGS) $(DFLAG)  $(SRCCOS).c  $(SRCCOS).h

$(LN).o: $(SRCLN)$(LN).c $(SRCLN)$(LN).h
	$(CC) $(CFLAGS) $(DFLAG) $(SRCLN)$(LN).c $(SRCLN)$(LN).h

$(AFACFL).o: $(SRCAFACFL)$(AFACFL).c $(SRCAFACFL)$(AFACFL).h
	$(CC) $(CFLAGS) $(DFLAG) $(SRCAFACFL)$(AFACFL).c $(SRCAFACFL)$(AFACFL).h

$(POW).o: $(SRCPOW)$(POW).c $(SRCPOW)$(POW).h
	$(CC) $(CFLAGS) $(DFLAG) $(SRCPOW)$(POW).c $(SRCPOW)$(POW).h

$(EXP).o: $(SRCEXP)$(EXP).c $(SRCEXP)$(EXP).h
	$(CC) $(CFLAGS) $(DFLAG) $(SRCEXP)$(EXP).c $(SRCEXP)$(EXP).h
	
# s21_factorial.o: $(SRCFACT).c $(SRCFACT).h
# 	$(CC) $(CFLAGS) $(DFLAG) $(SRCFACT).c $(SRCFACT).h 

clang_all: 
	$(CP) $(CL) .$(CF)
	$(CP) $(CL) $(SRCLN).$(CF)
	$(CP) $(CL) $(SRCCOS).$(CF)
	$(CP) $(CL) $(SRCEXP).$(CF)
	$(CP) $(CL) $(SRCPOW).$(CF)
	$(CP) $(CL) $(SRCAFACFL).$(CF)
	$(CP) $(CL) $(SRCTESTS).$(CF)
	$(CP) $(CL) $(SRCFACT).$(CF)
	# $(CF) -i *.c
	$(CF) -i *.h
	$(CF) -i $(SRCLN)*.c
	$(CF) -i $(SRCLN)*.h
	$(CF) -i $(SRCCOS)*.c
	$(CF) -i $(SRCCOS)*.h
	$(CF) -i $(SRCEXP)*.c
	$(CF) -i $(SRCEXP)*.h
	$(CF) -i $(SRCFACT)*.c
	$(CF) -i $(SRCFACT)*.h
	$(CF) -i $(SRCPOW)*.c
	$(CF) -i $(SRCPOW)*.h
	$(CF) -i $(SRCAFACFL)*.c
	$(CF) -i $(SRCAFACFL)*.h
	$(CF) -i $(SRCTESTS)*.c
	# $(CF) -i $(SRCTESTS)*.h
	rm -f .$(CF)
	rm -f $(SRCLN).$(CF)
	rm -f $(SRCCOS).$(CF)
	rm -f $(SRCEXP).$(CF)
	rm -f $(SRCPOW).$(CF)
	rm -f $(SRCAFACFL).$(CF)
	rm -f $(SRCTESTS).$(CF)
	rm -f $(SRCFACT).$(CF)

clear_test: clear_o clear_test

clear_o:
	rm -f *.o
	#rm -f $(SRCCOS)*.gch
	rm -f $(SRCLN)*.gch
	rm -f $(SRCEXP)*.gch
	rm -f $(SRCAFACFL)*.gch 
	rm -f $(SRCPOW)*.gch
	# rm -f $(SRCTESTS)*.gch
	# rm -f $(SRCFACT)*.gch
	# rm -f *.gch


clear_test: clear_o
	rm -f $(TESTS)

rebuild_test: clear_test test_riderkri
