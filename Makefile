# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: narlati <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/04 15:22:20 by narlati           #+#    #+#              #
#    Updated: 2016/11/08 13:20:51 by narlati          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ./*.c

OUTPUT = ./*.o

all: $(NAME)

$(NAME):
	gcc -c -Wall -Werror -Wextra -I./ $(SRC)
	ar rc $(NAME) $(OUTPUT)

clean:
	/bin/rm -f $(OUTPUT)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
