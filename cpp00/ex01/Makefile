.PHONY: all clean bonus fclean re

NAME = phonebook

HEADERS = ClassContact.hpp \
          ClassPhonebook.hpp

SRC = main.cpp \
      ClassContact.cpp \
      ClassPhonebook.cpp

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