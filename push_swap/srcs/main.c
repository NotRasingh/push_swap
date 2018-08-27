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

int ft_addnum(t_stack *sa, char *num)
{
	int i;

	i = 0;
	while (num[i] != ' ')
		i++;
	sa->num[sa->top++] = ft_atoi(num);
	return (i);
}

int main(int argc, char **argv)
{
	t_stack sa;
	int i;
	int j;

	i = 0;
	j = 0;
	sa.num = (long*)malloc(BUFF_SIZE);
	sa.top = 0;
//	ft_error(argv[i]);
	while (++i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (ft_isdigit(argv[i][j]) || argv[i][j] == '-')
			{
				j = j + ft_addnum(&sa, &argv[i][j]);
				if (j > (int)ft_strlen(argv[i]))
				break;
			}
			else
				j++;
		}
	}
	ft_splitstack(&sa);
	return (0);
}
