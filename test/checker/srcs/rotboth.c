/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotboth.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 09:59:58 by rasingh           #+#    #+#             */
/*   Updated: 2018/09/07 15:24:03 by rasingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap/includes/pushswap.h"

void	ft_revrotateboth(t_stack *sa, t_stack *sb)
{
	ft_revrota(sa);
	ft_revrotb(sb);
}

void	ft_rotateboth(t_stack *sa, t_stack *sb)
{
	ft_rota(sa);
	ft_rotb(sb);
}
