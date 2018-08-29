/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 11:21:54 by rasingh           #+#    #+#             */
/*   Updated: 2018/08/29 11:13:08 by rasingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHWAP_H
# define PUSHWAP_H
# include "libft/libft.h"
# define BUFF_SIZE 4096

typedef struct  s_stack
{
	long    *num;
	long     top;
}               t_stack;

void			ft_rota(t_stack *sa);
void			ft_revrota(t_stack *sa);
void			ft_rotb(t_stack *sa);
void			ft_revrotb(t_stack *sa);

void			ft_revrotateboth(t_stack *sa, t_stack *sb);
void			ft_rotateboth(t_stack *sa, t_stack *sb);

void			ft_swapa(t_stack *s);
void			ft_swapb(t_stack *s);
void			ft_swapboth(t_stack *sa, t_stack *sb);

void			ft_pusha(t_stack *sa, t_stack *sb);
void			ft_pushb(t_stack *sa, t_stack *sb);
void			ft_splitstack(t_stack *sa);

#endif

