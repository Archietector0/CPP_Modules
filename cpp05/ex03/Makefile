.PHONY: all clean bonus fclean re

NAME = form

HEADERS =	Bureaucrat.hpp				\
			ShrubberyCreationForm.hpp	\
			RobotomyRequestForm.hpp		\
			PresidentialPardonForm.hpp	\
			Intern.hpp					\
			Form.hpp

SRC =		main.cpp					\
			Bureaucrat.cpp				\
			ShrubberyCreationForm.cpp 	\
			RobotomyRequestForm.cpp		\
			PresidentialPardonForm.cpp	\
			Intern.cpp					\
			Form.cpp

CC = clang++

FLAG = -Wall -Werror -Wextra

OPTIONOBJ = -o

DEL = rm -rf

all: $(NAME)

$(NAME): $(HEADERS) $(SRC)
		$(CC) $(FLAG) $(SRC) $(OPTIONOBJ) $(NAME)

%.o: %.c $(HEADERS) $(SRC)
		@$(CC) $(FLAG) $< $(OPTIONOBJ) $@

clean:
		@$(DEL) $(NAME)

fclean: clean
		@$(DEL) $(NAME)

re: fclean all
