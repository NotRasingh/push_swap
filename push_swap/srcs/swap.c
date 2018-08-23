/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 13:47:09 by rasingh           #+#    #+#             */
/*   Updated: 2018/08/23 13:52:15 by rasingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

void	ft_swap(t_stack *s)
{
	long	tmp;

	if (s->top == 0 || s->top == 1)
		return ;
	tmp = s->num[0];
	s->num[0] = s->num[1];
	s->num[1] = tmp;
}

void	ft_swapboth(t_stack *sa, t_stack *sb)
{
	ft_swap(sa);
	ft_swap(sb);
}
