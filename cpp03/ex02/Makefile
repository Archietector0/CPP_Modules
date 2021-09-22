.PHONY: all clean bonus fclean re

NAME = fragTrap

HEADERS = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp

SRC = main.cpp		\
	  ClapTrap.cpp	\
	  ScavTrap.cpp	\
	  FragTrap.cpp

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
