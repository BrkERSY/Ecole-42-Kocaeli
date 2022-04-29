# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bersoy <bersoy@student.42.tr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/16 18:14:19 by bersoy            #+#    #+#              #
#    Updated: 2022/03/16 18:41:06 by bersoy           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= libftprintf.a
CC		:= gcc
CFLAGS	:= -Wall -Wextra -Werror -I. -c
FILES	:= $(shell find . -type f -name "*.c")
OBJ		:= $(FILES:%.c=%.o)

all:	$(NAME)

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)

clean:
	@rm -f *.o

fclean:	clean
	@rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
