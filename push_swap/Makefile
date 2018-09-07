# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rasingh <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/23 11:19:30 by rasingh           #+#    #+#              #
#    Updated: 2018/09/07 12:36:24 by rasingh          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
SOURCES = srcs/main.c srcs/sort.c srcs/swap.c srcs/push.c srcs/rotate.c srcs/rotboth.c
INCLUDES = ../libft/libft.a

$(NAME):
	@make -C ../libft
	@gcc -Wall -Werror -Wextra $(SOURCES) $(INCLUDES) -o $(NAME)
	@echo "\033[1;32;4mCOMPILING SUCCESSFUL"

all: $(NAME)

clean:
	@make clean -C ../libft
	@rm -f $(NAME)
	@echo "\033[1;34;4mCLEAN SUCCESSFUL\033[0m"

fclean: clean
	@make fclean -C ../libft
	@rm -f $(NAME)

re: fclean all
