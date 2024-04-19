NAME		= libftprintf.a
CFLAGS		= -Wall -Wextra -Werror
CC			= cc
RM			= rm -f

HEADER		= ft_printf.h

SRC			= ft_printf.c	\
			  ft_hexa.c		\
			  ft_nbr.c		\
			  ft_str.c		\
			  libft/ft_strlen.c

OBJ			= $(SRC:.c=.o)

all:		$(NAME)

$(NAME): 	$(OBJ)
			@ar rcs $(NAME) $(OBJ)

%.o: 		%.c Makefile $(HEADER)
			$(CC) $(FLAGS) -c $< -o ${<:.c=.o}

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY: all, clean, fclean, re
