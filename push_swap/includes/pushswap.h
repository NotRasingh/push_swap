/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 11:21:54 by rasingh           #+#    #+#             */
/*   Updated: 2018/09/10 11:22:59 by rasingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H
# include "../../libft/libft.h"
# define BUFF_SIZE 4096

typedef struct	s_stack
{
	long		*num;
	long		top;
}				t_stack;

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

int				ft_error(int argc, char **argv);
int				ft_dupcheck(t_stack sa);
int				ft_addnum(t_stack *sa, char *num);
t_stack			ft_init(int argc, char**argv);
#endif
