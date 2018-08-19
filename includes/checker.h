#ifndef CHECKER_H
# define CHECKER_H
#include "../includes/libft/libft.h"

typedef struct  s_stack
{
    long    *num;
    long     top;
}               t_stack;

void    ft_rotate(t_stack *sa);
#endif