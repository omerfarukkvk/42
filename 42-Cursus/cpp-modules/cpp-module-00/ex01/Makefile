SRC = PhoneBook.cpp main.cpp Contact.cpp
OBJ = $(SRC:.cpp =.o)
CC = g++
RM = rm -rf
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = phonebook

all : $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean :
	$(RM) $(OBJ)

fclean:
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re