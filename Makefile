# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmicheli <mmicheli@student.21-school.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/13 15:13:26 by mmicheli          #+#    #+#              #
#    Updated: 2021/12/22 17:41:35 by mmicheli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

SRC		=	ft_printf.c \
					src/ft_printf_utils.c \
					src/ft_spec_c.c \
					src/ft_spec_s.c \
					src/ft_spec_i_d.c \
					src/ft_spec_p.c \
					src/ft_spec_xs.c \
					src/ft_spec_xl.c \
					src/ft_spec_u.c \
					src/get_next_line.c \
					src/get_next_line_utils.c

HEAD	=	includes/ft_printf.h
OBJ		=	$(SRC:%.c=%.o)
D_FIL	=	$(SRC:%.c=%.d)

FLAG	=	-Wall -Werror -Wextra
CC		=	gcc

.PHONY	:	all clean fclean re

all		:	$(NAME)

$(NAME)	:	$(OBJ)
	@echo "🚀 Making of ft_printf... 🚀"
	@ar rcs $(NAME) $?

%.o		:	%.c $(HEAD)
	@$(CC) $(FLAG) -c $< -o $@ -MD

include $(wildcard $(D_FIL))

clean	:
	@rm -f $(OBJ) $(D_FIL)

fclean	: clean
	@rm -rf $(NAME)

re		:	fclean all