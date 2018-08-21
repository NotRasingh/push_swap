
#include "../includes/checker.h"

void    ft_swap(t_stack *s)
{
    long    tmp;

    if (s->top == 0 || s->top == 1)
        return ;
    tmp = s->num[s->top];
    s->num[s->top] = s->num[s->top - 1];
    s->num[s->top - 1] = tmp;
}

void    ft_swapboth(t_stack *sa, t_stack *sb)
{
    ft_swap(sa);
    ft_swap(sb);
}
