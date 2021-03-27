PROJECT_NAME = calculator

SRC = src/complex_calc.c

TEST = test/test_complex_calc.c unity/unity.c

$(PROJECT_NAME).out: $(SRC) $(TEST)
	gcc -I inc -I unity $(SRC) $(TEST) -o $(PROJECT_NAME).out

clean :
	rm *.out