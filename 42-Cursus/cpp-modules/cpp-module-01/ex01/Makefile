NAME = zombie
SRC  = main.cpp Zombie.cpp zombieHorde.cpp
OBJS = $(SRC:.cpp=.o)
CC  = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
RM   = rm -rf

all: $(NAME)
$(NAME):	$(OBJS)
		$(CC) $(CPPFLAGS) $(OBJS) -o $@

clean: 
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: 	fclean $(NAME)

.PHONY: all clean fclean re