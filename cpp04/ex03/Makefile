.PHONY: all clean bonus fclean re

NAME = AMateria

HEADERS =	AMateria.hpp		\
			Ice.hpp				\
			Cure.hpp			\
			ICharacter.hpp		\
			Character.hpp		\
			MateriaSource.hpp	\
			IMateriaSource.hpp

SRC =		main.cpp			\
			AMateria.cpp		\
			Ice.cpp				\
			Cure.cpp			\
			Character.cpp		\
			MateriaSource.cpp

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
