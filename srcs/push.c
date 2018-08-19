#include "../includes/checker.h"

void    ft_push(t_stack *sa, t_stack *sb)
{
    if (sb->top == 0)
    return ;
    sa->top++;
    sa[sa->top] = sb[sb->top];
}