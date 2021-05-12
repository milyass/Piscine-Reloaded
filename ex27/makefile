# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: milyass <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/10 18:12:18 by milyass           #+#    #+#              #
#    Updated: 2018/10/10 18:33:21 by milyass          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
SRC = *.c 
FLAG = -Wall -Wextra -Werror
all : $(NAME)
$(NAME):
	gcc $(FLAG) -c $(SRC)
	gcc $(FLAG) -o $(NAME) $(SRC)
 
clean:
	rm -f *.o
fclean: clean
	rm -f $(NAME)
