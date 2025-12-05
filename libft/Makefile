# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smolinas <smolinas@student.42sp.org.b      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/07 11:14:00 by smolinas          #+#    #+#              #
#    Updated: 2025/12/04 13:22:30 by smolinas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a 
CC = cc
INCLUDE = .
FLAGS = -Wall -Werror -Wextra
SRC = 	ft_atodb.c \
	ft_atoi.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_tolower.c \
	ft_toupper.c \
	ft_strlen.c \
	ft_strncmp.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_strnstr.c \
	ft_strdup.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_calloc.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_striteri.c \
	ft_strmapi.c \
	ft_itoa.c \
	ft_split.c \
	ft_print_char.c \
	ft_print_str.c \
	ft_print_n.c \
	ft_print_u.c \
	ft_print_hexa.c \
	ft_print_p.c \
	ft_printf.c \
	get_next_line.c \
	get_next_line_bonus.c
	
OBJS = $(SRC:.c=.o)

.PHONY: all clean fclean re

all:	$(NAME)

$(NAME):	$(OBJS)
	ar rcs $@ $^

%.o:	%.c
	$(CC) $(FLAGS) -c $< -I $(INCLUDE) -o $@

clean:
	rm -rf $(OBJS)  

fclean:	clean 
	rm -rf $(NAME)	

re: fclean all
