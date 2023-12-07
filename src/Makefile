FLAGS=-Wall -Werror -Wextra -std=c11 -D_POSIX_C_SOURCE=200809L
SRC = main.c s21_exp.c
FINAL = s21_exp
all: $(FINAL)
	@ clang-format -i *.c
	@ clang-format -i *.h
$(FINAL): $(SRC)
	gcc $(FLAGS) $(SRC) -o $(FINAL) -lm
clean:
	rm -rf $(FINAL)
rebuild: clean all