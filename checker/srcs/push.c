/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 13:46:04 by rasingh           #+#    #+#             */
/*   Updated: 2018/08/23 13:51:40 by rasingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

void	ft_push(t_stack *sa, t_stack *sb)
{
	int	i;

	if (sb->top == 0)
		return ;
	i = sa->top - 1;
	while (i > 0)
	{
		sa->num[i] = sa->num[i - 1];
		i--;
	}
	sa->num[0] = sb->num[0];
	sb->top++;
	i = 0;
	while (i < sb->top)
	{
		sb->num[i] = sb->num[i + 1];
		i++;
	}
	sb->top--;
}
