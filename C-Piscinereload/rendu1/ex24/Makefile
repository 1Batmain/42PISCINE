# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bduval <bduval@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/08 10:56:02 by bduval            #+#    #+#              #
#    Updated: 2024/11/08 17:59:28 by bduval           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
CC = cc
CFLAGS 	= -Wall -Werror -Wextra

NAME 	= libft.a
SRC_DIR = srcs/
LIB_DIR	= -I includes/
SRC = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c

OBJ = $(SRC:%.c=%.o)


%.o : $(SRC_DIR)%.c
	$(CC) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJ)
	ar rcs $@ $(OBJ)

re	: fclean all
	
clean : 
	rm -f $(OBJ)

fclean : clean 
	rm -f $(NAME)

.PHONY : re clean fclean
