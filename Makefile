# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rasingh <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/07 10:51:38 by rasingh           #+#    #+#              #
#    Updated: 2018/09/07 10:55:10 by rasingh          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = prog

all: $(NAME)

$(NAME):
	@mkdir $(NAME)
	make -C libft
	make -C checker
	make -C push_swap

clean:
	@rm -rf $(NAME)
	make clean -C libft

fclean: clean
	make fclean -C libft

love:
	@echo :*

re: fclean all
