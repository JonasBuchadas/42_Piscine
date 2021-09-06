# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/21 12:43:27 by jocaetan          #+#    #+#              #
#    Updated: 2021/08/22 17:00:12 by jocaetan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02

SRC = main

1 = ft_putstr

2 = ft_strlen

3 = dictsize

4 = recursive

5 = ft_strstr

6 = read_dict

7 = ft_clean

8 = decomposer

$(NAME): $(SRC).o $(1).o
	gcc -Werror -Wall -Wextra -o $(NAME) $(SRC).o $(1).o $(2).o $(3).o $(4).o $(5).o $(6).o $(7).o $(8).o

$(SRC).o: $(SRC).c $(1).c
	gcc -Werror -Wall -Wextra -c $(SRC).c $(1).c $(2).c $(3).c $(4).c $(5).c $(6).c $(7).c $(8).c

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME) 
