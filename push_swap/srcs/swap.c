/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 13:47:09 by rasingh           #+#    #+#             */
/*   Updated: 2018/08/29 11:02:36 by rasingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	ft_swapa(t_stack *s)
{
	long	tmp;

	if (s->top == 0 || s->top == 1)
		return ;
	tmp = s->num[0];
	s->num[0] = s->num[1];
	s->num[1] = tmp;
	ft_putendl("sa");
}

void    ft_swapb(t_stack *s)
{
    long    tmp;

    if (s->top == 0 || s->top == 1)
        return ;
    tmp = s->num[0];
    s->num[0] = s->num[1];
    s->num[1] = tmp;
	ft_putendl("sb");
}

void	ft_swapboth(t_stack *sa, t_stack *sb)
{
	ft_swapa(sa);
	ft_swapb(sb);
}
