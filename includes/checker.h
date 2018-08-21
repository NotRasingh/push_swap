#ifndef CHECKER_H
# define CHECKER_H
#include "../includes/libft/libft.h"

///////////////////////////// FIRST ARG MUST BE TOP OF STACK 
//NEED TO CHANGE CODE SO TOP OF STACK IS AT 0

typedef struct  s_stack
{
    long    *num;
    long     top;
}               t_stack;

void    		ft_rotate(t_stack *sa);
void			ft_rotateboth(t_stack *sa, t_stack *sb);
void			ft_revrotate(t_stack *sa);
void			ft_revrotateboth(t_stack *sa, t_stack *sb);

void			ft_swap(t_stack *s);
void			ft_swapboth(t_stack *sa, t_stack *sb);

void			ft_push(t_stack *sa, t_stack *sb);//////WRONG

#endif
