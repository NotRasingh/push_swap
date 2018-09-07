/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 13:46:04 by rasingh           #+#    #+#             */
/*   Updated: 2018/09/07 15:22:37 by rasingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap/includes/pushswap.h"

void	ft_pusha(t_stack *sa, t_stack *sb)
{
	int i;

	if (sa->top == 0)
		return ;
	i = sb->top - 1;
	while (i >= 0)
	{
		sb->num[i + 1] = sb->num[i];
		i--;
	}
	sb->num[0] = sa->num[0];
	sb->top++;
	while (i < sa->top)
	{
		sa->num[i] = sa->num[i + 1];
		i++;
	}
	sa->top--;
}

void	ft_pushb(t_stack *sa, t_stack *sb)
{
	int	i;

	if (sa->top == 0)
		return ;
	i = sb->top - 1;
	while (i >= 0)
	{
		sb->num[i + 1] = sb->num[i];
		i--;
	}
	sb->num[0] = sa->num[0];
	sb->top++;
	while (i < sa->top)
	{
		sa->num[i] = sa->num[i + 1];
		i++;
	}
	sa->top--;
}
