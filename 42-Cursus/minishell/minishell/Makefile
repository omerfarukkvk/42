NAME	= minishell
SRCS	= $(wildcard *.c)
CC		= gcc
LIB		= ./libft/libft.a
CFLAGS	= -Wall -Werror -Wextra
OBJS = $(SRCS:.c=.o)
MAKE = make

all	:  $(LIB) $(NAME)

$(LIB) :
		@$(MAKE) -C ./libft

$(NAME): $(OBJS)
	@$(CC) $(OBJS) $(LIB) $(CFLAGS) -o $(NAME) -lreadline

clean :
		@make fclean -C ./libft
		@rm -rf $(OBJS)

fclean : clean
		rm -rf $(NAME)

re : clean all

norm :
		norminette *.[ch]

.PHONY : all clean fclean re norm