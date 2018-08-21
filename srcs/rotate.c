#include "../includes/checker.h"

void    ft_rotate(t_stack *sa)
{
    int i;
    long tmp;
    
    i = sa->top;
    while (i > 0)
    {
        tmp = sa->num[i - 1];
        sa->num[i - 1] = sa->num[i];
        sa->num[i] = tmp;
        i--;
    }
}

void    ft_rotateboth(t_stack *sa, t_stack *sb)
{
    ft_rotate(sa);
    ft_rotate(sb);
}

void ft_revrotate(t_stack *sa)///////DOUBLE CHECk THiS 
{
    int i;
    long tmp;
    
    i = 0;
    while (i < sa->top)
    {
        tmp = sa->num[i + 1];
        sa->num[i + 1] = sa->num[i];
        sa->num[i] = tmp;
        i++;
    }
}

void ft_revrotateboth(t_stack *sa, t_stack *sb)
{
    ft_revrotate(sa);
    ft_revrotate(sb);
}
