/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 13:46:18 by rasingh           #+#    #+#             */
/*   Updated: 2018/08/23 14:49:52 by rasingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

///NEED TO ACCOMODATE FOR NEGATIVE NUMBERS
int	main(int argc, char **argv)
{
	t_stack	sa;
	int		i;
	int		c;
	int		j;

	i = 1;
	c = 0;
	j = 0;
	sa.num = (long*)malloc(BUFF_SIZE);
	sa.top = c;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (ft_isdigit(argv[i][j]))
			{	sa.num[sa.top++] = ft_atoi(&argv[i][j]);
			ft_putnbr(sa.num[sa.top - 1]);
			ft_putchar('\n');
			}
			j++;
		}
		i++;
	}
	ft_putstr("TOP: ");
	ft_putnbr(sa.top);
	return (0);
}
