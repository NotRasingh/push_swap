#ifndef CHECKER_H
# define CHECKER_H
#include "libft/libft.h"

typedef struct  s_stack
{
    long    *num;
    long     top;
}               t_stack;

void    		ft_rota(t_stack *sa);
void			ft_revrota(t_stack *sa);
void            ft_rotb(t_stack *sa);
void            ft_revrotb(t_stack *sa);

void			ft_revrotateboth(t_stack *sa, t_stack *sb);
void			ft_rotateboth(t_stack *sa, t_stack *sb);

void			ft_swapa(t_stack *s);
void            ft_swapb(t_stack *s);
void			ft_swapboth(t_stack *sa, t_stack *sb);

void			ft_pusha(t_stack *sa, t_stack *sb);
void            ft_pushb(t_stack *sa, t_stack *sb);

#endif
