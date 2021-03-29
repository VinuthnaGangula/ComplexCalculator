PROJECT_NAME = calculator

INC = inc

UNITY = unity

SRC = src/complex_calc.c

TEST = test/test_complex_calc.c unity/unity.c

$(PROJECT_NAME).out: $(SRC) $(TEST)
	gcc -I $(INC) -I $(UNITY) $(SRC) $(TEST) -o $(PROJECT_NAME).out

run: $(PROJECT_NAME).out
	./$(PROJECT_NAME).out

clean :
	rm *.out