# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rasingh <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/21 13:01:47 by rasingh           #+#    #+#              #
#    Updated: 2018/08/21 13:06:39 by rasingh          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = checker
SOURCES = srcs/*.c
INCLUDES = includes/libft/libft.a

$(NAME):
	@make -C includes/libft
	@gcc -Wall -Werror -Wextra $(SOURCES) $(INCLUDES) -o checker
	@echo "\033[1;32;4mCOMPILING SUCCESSFUL"

all: $(NAME)

clean:
	@rm -f includes/libft/libft.a includes/libft/*.o
	@rm -f $(NAME)
	@echo "\033[1;34;4mCLEAN SUCCESSFUL\033[0m"

fclean: clean
	@rm -f $(NAME)

re: fclean all
