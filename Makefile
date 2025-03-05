##
## EPITECH PROJECT, 2025
## NanotekSpice
## File description:
## Makefile
##

SRC =	src/main.cpp						\
        src/HelloWorld.cpp					\
        src/Shell.cpp						\
        src/Parsing.cpp						\
        src/Map.cpp							\
        src/Pin.cpp							\
        src/Factory.cpp						\
        src/Abstract/AComponent.cpp			\
        src/Utils/StrToWordArray.cpp		\
        src/Utils/GetFileContent.cpp		\
        src/Utils/RemoveComment.cpp			\
        src/Utils/WriteInFile.cpp			\
        src/Components/AndComponent.cpp		\
        src/Components/FalseComponent.cpp	\
        src/Components/InputComponent.cpp	\
        src/Components/NotComponent.cpp		\
        src/Components/OrComponent.cpp		\
        src/Components/OutputComponent.cpp	\
        src/Components/TrueComponent.cpp	\
        src/Components/XorComponent.cpp		\
        src/Components/ClockComponent.cpp	\
        src/Components/4030Component.cpp	\
        src/Components/4001Component.cpp	\
        src/Components/4071Component.cpp	\
        src/Components/4081Component.cpp	\
        src/Components/4011Component.cpp	\
        src/Components/4069Component.cpp	\
        src/Components/LoggerComponent.cpp	\

OBJ = $(SRC:.cpp=.o)

TESTSRC =	tests/Utils/TestUtils.cpp			\
            tests/Test_HelloWorld.cpp			\
            tests/Test_XorComponent.cpp			\
            tests/Test_OrComponent.cpp			\
            tests/Test_AndComponent.cpp			\
            tests/Test_NotComponent.cpp			\
            tests/Test_4001Component.cpp		\
            tests/Test_4011Component.cpp		\
            tests/Test_4030Component.cpp		\
            tests/Test_4069Component.cpp		\
            tests/Test_4071Component.cpp		\
            tests/Test_4081Component.cpp		\
            tests/Test_Utils.cpp				\
            src/HelloWorld.cpp					\
            src/Shell.cpp						\
            src/Parsing.cpp						\
            src/Map.cpp							\
            src/Pin.cpp							\
            src/Factory.cpp						\
            src/Abstract/AComponent.cpp			\
            src/Utils/StrToWordArray.cpp		\
            src/Utils/GetFileContent.cpp		\
            src/Utils/RemoveComment.cpp			\
            src/Utils/WriteInFile.cpp			\
            src/Components/AndComponent.cpp		\
            src/Components/ClockComponent.cpp	\
            src/Components/FalseComponent.cpp	\
            src/Components/InputComponent.cpp	\
            src/Components/NotComponent.cpp		\
            src/Components/OrComponent.cpp		\
            src/Components/OutputComponent.cpp	\
            src/Components/TrueComponent.cpp	\
            src/Components/XorComponent.cpp		\
            src/Components/4030Component.cpp	\
            src/Components/4001Component.cpp	\
            src/Components/4071Component.cpp	\
            src/Components/4081Component.cpp	\
            src/Components/4011Component.cpp	\
            src/Components/4069Component.cpp	\
            src/Components/LoggerComponent.cpp	\

TESTOBJ = $(TESTSRC:.cpp=.o)

NAME = nanotekspice

CPPFLAGS = -Wall -Wextra -Werror $(INCLUDEFLAGS)

INCLUDEFLAGS = -I./include -I./include/Abstract -I./include/Components \
			   -I./include/Interface

all: $(NAME)

$(NAME): $(OBJ)
	g++ -o $(NAME) $(OBJ) $(CPPFLAGS)

clean:
	rm -f $(OBJ)
	rm -f $(TESTOBJ)
	rm -rf obj
	rm -f unit_tests
	rm -f *.gcdo
	rm -f *.gcda
	rm -f *.gcno

tests_run: clean
	g++ -o unit_tests $(TESTSRC) \
		--coverage -lcriterion $(CPPFLAGS)
	./unit_tests
	gcovr --exclude include/
	gcovr --exclude include/ --branches

fclean: clean
	rm -f $(NAME) unit_tests

re: fclean all
