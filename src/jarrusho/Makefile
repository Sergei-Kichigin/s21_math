FLAGS=-g -Wall -Werror -Wextra -std=c11 -D_POSIX_C_SOURCE=200809L
SRC = main.c s21_exp.c s21_ln_Lera.c s21_ln.c s21_pow_sqrt.c s21_abs_fabs_ceil_floor.c
FINAL = s21_ln
all: $(FINAL)
	@ clang-format -i *.c
	@ clang-format -i *.h
$(FINAL): $(SRC)
	gcc $(FLAGS) $(SRC) -o $(FINAL) -lm
clean:
	rm -rf $(FINAL)
rebuild: clean all
