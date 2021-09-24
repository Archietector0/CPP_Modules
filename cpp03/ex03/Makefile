.PHONY: all clean bonus fclean re

NAME = diamondTrap

HEADERS = ClapTrap.hpp FragTrap.hpp ScavTrap.hpp DiamondTrap.hpp

SRC = main.cpp \
	  ClapTrap.cpp \
	  FragTrap.cpp \
	  ScavTrap.cpp \
	  DiamondTrap.cpp

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
