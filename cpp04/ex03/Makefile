.PHONY: all clean bonus fclean re

NAME = inhibits

HEADERS =	AMateria.hpp	\
			Cure.hpp		\
			Ice.hpp			\
			Character.hpp

SRC = 		main.cpp		\
			AMateria.cpp	\
			Cure.cpp		\
			Ice.cpp			\
			Character.hpp

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
