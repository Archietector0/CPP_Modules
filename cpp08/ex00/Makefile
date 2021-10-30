.PHONY: all clean bonus fclean re

NAME = containerTemplate

HEADERS = easyfind.hpp

SRC = main.cpp

CC = clang++

FLAG = -Wall -Werror -Wextra

OPTIONOBJ = -o

DEL = rm -rf

all: $(NAME)

$(NAME): $(HEADERS) $(SRC)
		@$(CC) $(FLAG) $(SRC) $(OPTIONOBJ) $(NAME)

%.o: %.c $(HEADERS) $(SRC)
		$(CC) $(FLAG) $< $(OPTIONOBJ) $@

clean:
		@$(DEL) $(NAME)

fclean: clean
		@$(DEL) $(NAME)

re: fclean all