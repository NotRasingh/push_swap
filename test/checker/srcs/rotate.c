/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 13:46:54 by rasingh           #+#    #+#             */
/*   Updated: 2018/09/14 08:57:47 by rasingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap/includes/pushswap.h"

void	ft_revrota(t_stack *sa)
{
	int		i;
	long	tmp;

	i = sa->top - 1;
	tmp = sa->num[i];
	while (i >= 0)
	{
		sa->num[i] = sa->num[i - 1];
		i--;
		sa->num[i] = tmp;
	}
	sa->num[0] = tmp;
}

void	ft_revrotb(t_stack *sa)
{
	int		i;
	long	tmp;

	i = sa->top - 1;
	tmp = sa->num[i];
	while (i >= 0)
	{
		sa->num[i] = sa->num[i - 1];
		i--;
		sa->num[i] = tmp;
	}
	sa->num[0] = tmp;
}

void	ft_rota(t_stack *sa)
{
	int		i;
	long	tmp;

	i = 0;
	tmp = sa->num[0];
	while (i < sa->top - 1)
	{
		sa->num[i] = sa->num[i + 1];
		i++;
		sa->num[i] = tmp;
	}
}

void	ft_rotb(t_stack *sa)
{
	int		i;
	long	tmp;

	i = 0;
	while (i < sa->top - 1)
	{
		tmp = sa->num[i + 1];
		sa->num[i + 1] = sa->num[i];
		sa->num[i] = tmp;
		i++;
	}
}
