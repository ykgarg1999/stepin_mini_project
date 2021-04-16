

PROJECT_NAME= calculator.exe
TEST_PROJECT_NAME=TEST_$(PROJECT_NAME)

BUILD_DIR=Executable

SRC=main.c\
src\displayOperations.c\
src\add_operation.c\
src\div_operation.c\
src\fact_operation.c\
src\multiply_operation.c\
src\pow_operation.c\
src\sub_operation.c

TEST_SRC=test_cases\test_operations.c\
unity\unity.c

INC=-Iinc\
-Iunity

# To check if the os is windows or linux and set the executable file

ifdef OS
	RM = del /q
	FixPath = $(subst /,\,$1)
	EXEC = exe
else
	ifeq ($(shell uname),Linux)
	RM = rm -rf
	FixPath = $1
	EXEC = out
	endif
endif

# Makefile will not run target command if the name with file already exists. To override this use


.PHONY : all test coverage run clean doc

all: $(BUILD_DIR)
	gcc $(SRC) $(INC) -o $(call FixPath,$(BUILD_DIR)/$(PROJECT_NAME))
	
run: all
	$(call FixPath,$(BUILD_DIR)/$(PROJECT_NAME))
	
test: $(SRC) $(TEST_SRC)
	gcc $^ $(INC) -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJECT_NAME).$(EXEC))
	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJECT_NAME).$(EXEC))
	
coverage: $(PROJECT_NAME)
	gcc -fprofile-arcs -ftest-coverage $(SRC)$(INC) -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJECT_NAME).$(EXEC))
	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJECT_NAME).$(EXEC))
	gcov -a $(SRC)
	
doc: 
	make -C ./doc
	
$(BUILD_DIR):
	mkdir $(BUILD_DIR)

clean:
	$(RM) $(call FixPath,$(BUILD_DIR)/*)
	make clean -c doc
	rmdir $(BUILD_DIR) doc/html