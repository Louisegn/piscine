# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lgrillon <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/30 23:23:45 by lgrillon          #+#    #+#              #
#    Updated: 2020/10/01 14:49:08 by lgrillon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	libft.a
SRCS =	ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
OBJS =	$(addprefix srcs/, ${SRCS:.c=.o})
FLAGS = -Wall -Wextra -Werror

.c.o:
		gcc $(FLAGS) -c -I./includes $< -o ${<:.c=.o}

$(NAME):	$(OBJS)
			ar -crs $(NAME) $(OBJS)

all:		$(NAME)

clean: 
			rm -f $(OBJS)

flcean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY: all clean fclean re
