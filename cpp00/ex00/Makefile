.PHONY: all clean bonus fclean re

NAME = megaphone

SRC = megaphone.cpp

CC = clang++

FLAG = -Wall -Werror -Wextra

OPTIONOBJ = -o

DEL = rm -rf


all: $(NAME)

$(NAME): $(HEADER) $(SRC)
	@$(CC) $(FLAG) $(SRC) $(OPTIONOBJ) $(NAME)

%.o: %.c $(HEADER)
	$(CC) $(FLAG) $< $(OPTIONOBJ) $@

clean:
	@$(DEL) $(NAME)

fclean: clean
	@$(DEL) $(NAME)

re: fclean all