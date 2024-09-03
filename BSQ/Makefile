# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bduval <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/03 23:36:31 by bduval            #+#    #+#              #
#    Updated: 2024/09/03 23:38:47 by bduval           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

CC = cc
CFLAGS = -Wall -Wextra -Werror -g

SRC = 	./is_solution.c \
	./is_valid_pool.c \
	./main.c \
	./paint.c \
	./pool.c \
	./put.c \
	./read2.c \
	./read.c \
	./split.c \
	./square.c \
	./tools.c

OBJ = $(SRC:.c=.o)

bsq:
	$(CC) $(CFLAGS) -o $(NAME) $(SRC)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

.PHONY: all clean fclean
