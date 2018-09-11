/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 11:05:06 by rasingh           #+#    #+#             */
/*   Updated: 2018/09/10 11:25:00 by rasingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H
# include "../../libft/libft.h"
# include "get_next_line/get_next_line.h"
# include "../../push_swap/includes/pushswap.h"

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

int				ft_error(int argc, char **argv);
int				ft_dupcheck(t_stack sa);
int				ft_addnum(t_stack *sa, char *num);
t_stack			ft_init(int argc, char**argv);

#endif
