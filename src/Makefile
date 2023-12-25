CC = gcc
CFLAGS = -Wall -Wextra -Werror -std=c11 -fprofile-arcs -ftest-coverage
LIBS = -lcheck -lsubunit -lm

DFLAG = -D_POSIX_C_SOURCE=200809L

SRC_FILES = s21_abs_fabs_ceil_floor.c s21_cos_sin_tan.c s21_exp.c s21_ln.c s21_pow_sqrt.c s21_acos_asin_atan.c
OBJ_FILES = $(SRC_FILES:.c=.o)

# static lib
LIBRARY = s21_math.a
# tests
EXECUTABLE = s21_tests

# test src
TEST_SRC = tests.c
TEST_OBJ = $(TEST_SRC:.c=.o)

# format src
SRC_CL=../materials/linters/.clang-format

all: s21_math.a $(EXECUTABLE) test gcov_report

# build static lib
s21_math.a: $(OBJ_FILES)
	ar rcs $(LIBRARY) $(OBJ_FILES)

# build tests
$(EXECUTABLE): $(LIBRARY) $(TEST_OBJ)
	$(CC) $(CFLAGS) $(DFLAG) $(TEST_OBJ) -o $(EXECUTABLE) -L. -l:$(LIBRARY) $(LIBS)

%.o: %.c
	$(CC) $(CFLAGS) $(DFLAG) -c $< -o $@

# run tests
test: $(EXECUTABLE)
	./$(EXECUTABLE)

# coverage test
coverage: test
	gcov $(SRC_FILES) $(TEST_SRC)

gcov_report: coverage
	gcovr -r . --html --html-details -o coverage_report.html

# format code style
clang_all:
	cp $(SRC_CL) .clang-format
	clang-format -i *.c
	clang-format -i *.h
	rm -f .clang-format

clean:
	rm -f $(EXECUTABLE) $(LIBRARY) *.gc* *.html *.css *.o

.PHONY: all test clean s21_math.a gcov_report
