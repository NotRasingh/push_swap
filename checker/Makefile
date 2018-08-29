# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rasingh <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/21 13:01:47 by rasingh           #+#    #+#              #
#    Updated: 2018/08/29 11:18:15 by rasingh          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = checker
SOURCES = srcs/checker.c srcs/swap.c srcs/push.c srcs/rotate.c srcs/rotboth.c 
INCLUDES = includes/libft/libft.a includes/get_next_line/get_next_line.c

$(NAME):
	@make -C includes/libft
	@gcc -Wall -Werror -Wextra $(SOURCES) $(INCLUDES) -o checker
	@echo "\033[1;32;4mCOMPILING SUCCESSFUL"

all: $(NAME)

clean:
	@make clean -C includes/libft
	@rm -f $(NAME)
	@echo "\033[1;34;4mCLEAN SUCCESSFUL\033[0m"

fclean: clean
	@make fclean -C includes/libft
	@rm -f $(NAME)

re: fclean all
