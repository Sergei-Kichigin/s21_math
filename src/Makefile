CC=gcc
CFLAGS= -std=c11 -Wall -Werror -Wextra -c
OFLAG= -o
LMFLAG=-lm 
DFLAG= -D_POSIX_C_SOURCE=200809L
SRCCOS=trigonometry/
COS=s21_cos_sin_tan
SRCLN=ln/
LN=s21_ln
SRCAFACFL=abs_fabs_ceil_floor/
AFACFL=s21_abs_fabs_ceil_floor
SRCPOW=pow_sqrt/
POW=s21_pow_sqrt
SRCEXP=exp/
EXP=s21_exp
SRCFMOD=fmod/
FMOD=s21_fmod
#SRCFACT=fact/s21_factorial
SRCTESTS=tests/
TESTS=s21_test_riderkri
CL=../materials/linters/.clang-format
CF=clang-format
MATH=s21_math.h
CP=cp
# all: s21_math.h  #need to remember how mo make libs
# s21_math.h: 

test_riderkri: clang_all $(AFACFL).o $(EXP).o $(LN).o $(POW).o $(TESTS).o $(COS).o $(FMOD).o #s21_factorial.o
	$(CC) $(AFACFL).o $(EXP).o $(LN).o $(POW).o $(TESTS).o $(COS).o $(FMOD).o $(LMFLAG) $(OFLAG) $(TESTS)
	rm -f *.o
	rm -f *.gch
	rm -f */*gch

$(TESTS).o: $(SRCTESTS)$(TESTS).c
	$(CC) $(CFLAGS) $(DFLAG) $(SRCTESTS)$(TESTS).c

$(COS).o: $(SRCCOS)$(COS).c  $(SRCCOS)$(COS).h
	$(CC) $(CFLAGS) $(DFLAG)  $(SRCCOS)$(COS).c  $(SRCCOS)$(COS).h

$(LN).o: $(SRCLN)$(LN).c $(SRCLN)$(LN).h
	$(CC) $(CFLAGS) $(DFLAG) $(SRCLN)$(LN).c $(SRCLN)$(LN).h

$(AFACFL).o: $(SRCAFACFL)$(AFACFL).c $(SRCAFACFL)$(AFACFL).h
	$(CC) $(CFLAGS) $(DFLAG) $(SRCAFACFL)$(AFACFL).c $(SRCAFACFL)$(AFACFL).h

$(POW).o: $(SRCPOW)$(POW).c $(SRCPOW)$(POW).h
	$(CC) $(CFLAGS) $(DFLAG) $(SRCPOW)$(POW).c $(SRCPOW)$(POW).h

$(EXP).o: $(SRCEXP)$(EXP).c $(SRCEXP)$(EXP).h
	$(CC) $(CFLAGS) $(DFLAG) $(SRCEXP)$(EXP).c $(SRCEXP)$(EXP).h

$(FMOD).o: $(SRCFMOD)$(FMOD).c $(SRCFMOD)$(FMOD).h
	$(CC) $(CFLAGS) $(DFLAG) $(SRCFMOD)$(FMOD).c $(SRCFMOD)$(FMOD).h

# s21_factorial.o: $(SRCFACT).c $(SRCFACT).h
# 	$(CC) $(CFLAGS) $(DFLAG) $(SRCFACT).c $(SRCFACT).h 

clang_all: 
	$(CP) $(CL) .$(CF)
	$(CP) $(CL) $(SRCLN).$(CF)
	$(CP) $(CL) $(SRCCOS).$(CF)
	$(CP) $(CL) $(SRCEXP).$(CF)
	$(CP) $(CL) $(SRCFMOD).$(CF)
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
	$(CF) -i $(SRCFMOD)*.c
	$(CF) -i $(SRCFMOD)*.h
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
	rm -f $(SRCFMOD).$(CF)
	rm -f $(SRCPOW).$(CF)
	rm -f $(SRCAFACFL).$(CF)
	rm -f $(SRCTESTS).$(CF)
	rm -f $(SRCFACT).$(CF)

clear_test: clear_o clear_test

clear_o:
	rm -f *.o
	rm -f $(SRCCOS)*.gch
	rm -f $(SRCLN)*.gch
	rm -f $(SRCEXP)*.gch
	rm -f $(SRCFMOD)*.gch
	rm -f $(SRCAFACFL)*.gch 
	rm -f $(SRCPOW)*.gch
# rm -f $(SRCTESTS)*.gch
# rm -f $(SRCFACT)*.gch
	rm -f *.gch


clear_test: clear_o
	rm -f $(TESTS)

rebuild_test: clear_test test_riderkri
