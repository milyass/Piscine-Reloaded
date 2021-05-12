# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: milyass <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/08 14:56:46 by milyass           #+#    #+#              #
#    Updated: 2018/10/08 17:36:29 by milyass          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SOURCE = ./srcs/
OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
HEADER = ./includes/
FLAG = -Wall -Wextra -Werror
OPTIO = -c
SRC = $(SOURCE)ft_putchar.c $(SOURCE)ft_putstr.c $(SOURCE)ft_strcmp.c $(SOURCE)ft_strlen.c $(SOURCE)ft_swap.c
all: $(NAME)
$(NAME):
	gcc $(FLAG) $(OPTIO) $(SRC) -I $(HEADER) 
	ar rc $(NAME) $(OBJ)
clean:
	RM -f $(OBJ)
fclean: clean
	RM -f $(NAME)
re: fclean all
