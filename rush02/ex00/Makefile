NAME		=	rush-02	
CC			=	gcc
CFLAGS		=	-Wall -Werror -Wextra
IFLAGS		=	-I$(INC_PATH)
RM			=	rm -rf
INC_PATH	=	includes
INC_NAME	=	utils.h \
				struct_manager.h \
				read_dict.h

SRC_PATH	=	srcs
SRC_NAME	=	main.c \
				handle_print.c \
				read_dict.c \
				read_utils.c \
				struct_manager.c \
				utils.c

INC			=	$(addprefix $(INC_PATH)/, $(INC_NAME))
SRC			=	$(addprefix $(SRC_PATH)/, $(SRC_NAME))
OBJ			=	$(SRC:.c=.o)
.SUFFIXES:		.c .o .h

all			:	$(NAME)

$(NAME)		: 	$(OBJ) $(INC)
				$(CC) -o $(NAME) $(IFLAGS) $(OBJ)

%.o: 			%.c
				$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@

clean		:
				$(RM) $(OBJ)

fclean		:	clean
				$(RM) $(NAME)

re			: 	fclean all

.PHONY: 		all fclean clean re
