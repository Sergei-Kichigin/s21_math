CC = gcc
CFLAGS = -Wall -Wextra -Werror -std=c11 -fprofile-arcs -ftest-coverage
LIBS = -lcheck -lpthread -lm
DFLAG = -D_POSIX_C_SOURCE=200809L

# Исходные файлы
SRC_FILES = s21_abs_fabs_ceil_floor.c s21_cos_sin_tan.c s21_exp.c s21_ln.c s21_pow_sqrt.c s21_acos_asin_atan.c
TEST_SRC = tests.c

# Объектные файлы
OBJ_FILES = $(SRC_FILES:.c=.o)
TEST_OBJ = $(TEST_SRC:.c=.o)

EXECUTABLE = s21_tests

SRC_CL=../materials/linters/.clang-format
CF=clang-format

all: clang_all $(EXECUTABLE)

# Сборка исполняемого файла
$(EXECUTABLE): $(OBJ_FILES) $(TEST_OBJ)
	$(CC) $(CFLAGS) $(DFLAG) $(OBJ_FILES) $(TEST_OBJ) -o $(EXECUTABLE) $(LIBS)

%.o: %.c
	$(CC) $(CFLAGS) $(DFLAG) -c $< -o $@

test: $(EXECUTABLE)
	./$(EXECUTABLE)
	#rm -f *.o *.gcno *.gcda

clang_all:
	cp $(SRC_CL) .$(CF)
	$(CF) -i *.c
	$(CF) -i *.h
	rm -f .$(CF)

coverage: test
	gcov $(SRC_FILES) $(TEST_SRC)

gcov_report: coverage
	gcovr -r . --html --html-details -o coverage_report.html

clean:
	rm -f $(EXECUTABLE) *.gcda *.gcno *.gcov *.html *.css *.o

.PHONY: all test clean
