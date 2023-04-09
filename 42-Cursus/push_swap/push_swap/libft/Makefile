# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: okavak <okavak@student.42istanbul.com.t    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/03 15:36:11 by fbingol           #+#    #+#              #
#    Updated: 2022/11/28 00:46:43 by okavak           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRCS	=	ft_isdigit.c ft_strlen.c ft_bzero.c ft_calloc.c ft_strjoin.c ft_split.c \
			ft_substr.c ft_memset.c ft_strdup.c
OBJS = $(SRCS:.c=.o)

BONUS	=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
				ft_lstlast.c ft_lstadd_back.c \
				ft_lstdelone.c ft_lstclear.c \
				ft_lstiter.c ft_lstmap.c

BONUS_OBJS	= $(BONUS:.c=.o)

CC	=	gcc
RM	=	rm -f
FLAGS	= -Wall -Wextra -Werror -I.

$(NAME): 
		@$(CC) $(FLAGS) -c $(SRCS)
		@ar rcs $(NAME) $(OBJS)

all: $(NAME)

bonus:
		$(CC) $(FLAGS) -c $(BONUS)
		ar rcs $(NAME) $(BONUS_OBJS)

clean:
		@$(RM) $(OBJS)
		@$(RM) $(BONUS_OBJS)

fclean: clean
		@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus