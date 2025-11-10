# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smolinas <smolinas@student.42sp.org.b      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/07 11:14:00 by smolinas          #+#    #+#              #
#    Updated: 2025/10/23 11:12:56 by smolinas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap 
CC = cc
INCLUDE = .
FLAGS = -Wall -Werror -Wextra -Ilibft
SRC = 	xxx.c \
	yyy.c \
		
OBJS = $(SRC:.c=.o)

.PHONY: all clean fclean re

all:	$(NAME)

$(NAME):	$(OBJS)
	## usar regras especificasar rcs $@ $^ compilar a libft usando o makefile da lib

%.o:	%.c
	$(CC) $(FLAGS) -c $< -I $(INCLUDE) -o $@

clean:
	rm -rf $(OBJS)  

fclean:	clean 
	rm -rf $(NAME)	

re: fclean all
