#include "../includes/pushswap.h"

int ft_inorder(t_stack sa)
{
    int i;

    i = 0;
    while (i < sa.top - 1)
    {
        if (sa.num[i] > sa.num[i + 1])
            return (0);
        i++;
    }
    return (1);
}
int ft_lowest(t_stack sa)
{
    int small;
    int j;

    small = sa.num[0];
    j = 0;
    while (j < sa.top)
    {
        if (sa.num[j] < small)
            small = sa.num[j];
        j++;
    }
    return (small);
}
void    ft_sort(t_stack *sa, t_stack sb)
{
    int sml;

    while (!ft_inorder(*sa))
    {
        sml = ft_lowest(*sa);
        if (sa->num[1] == sml)
            ft_swap(sa);
    }
    while (sb.top > 0)
    {
        ft_push(sa, &sb);
        ft_putnbr(sb.top);
        ft_putchar('\n');
    }
     ft_putstr("TOP VAL A: ");
        ft_putnbr(sa->num[0]);
        ft_putstr("  A TOP: ");
        ft_putnbr(sa->top);
        ft_putchar('\n');
          for (int i = 0; i < sa->top; i++)
            {
                ft_putstr("STACK: ");
                ft_putnbr(sa->num[i]);
                ft_putchar('\n');
            }
            ft_putstr("_______________________________________________\n");
        ft_putchar('\n');
        ft_putstr("TOP VAL B:");
        ft_putnbr(sb.num[0]);
        ft_putstr("  B TOP: ");
        ft_putnbr(sb.top);
        ft_putchar('\n');
          for (int i = 0; i < sb.top; i++)
            {
                ft_putstr("STACK: ");
                ft_putnbr(sb.num[i]);
                ft_putchar('\n');
            }
            ft_putstr("_______________________________________________");
        ft_putchar('\n');
    ft_putnbr(sa->top);
}
void    ft_splitstack(t_stack *sa)
{
    t_stack sb;
    int low;
    int end;

    end = sa->top;
    sb.top = 0;
    sb.num = (long *)malloc(BUFF_SIZE);
    while (sa->top != end / 2)
    {
        low = ft_lowest(*sa);
        if (low < sa->top / 2)
        {
            while (sa->num[0] != low)
                ft_revrotate(sa);
        }
        else
        {
            while (sa->num[0] != low)
                ft_rotate(sa);
        }
        ft_push(&sb, sa);
    }
     ft_putstr("TOP VAL A: ");
        ft_putnbr(sa->num[0]);
        ft_putstr("  A TOP: ");
        ft_putnbr(sa->top);
        ft_putchar('\n');
          for (int i = 0; i < sa->top; i++)
            {
                ft_putstr("STACK: ");
                ft_putnbr(sa->num[i]);
                ft_putchar('\n');
            }
            ft_putstr("_______________________________________________\n");
        ft_putchar('\n');
        ft_putstr("TOP VAL B:");
        ft_putnbr(sb.num[0]);
        ft_putstr("  B TOP: ");
        ft_putnbr(sb.top);
        ft_putchar('\n');
          for (int i = 0; i < sb.top; i++)
            {
                ft_putstr("STACK: ");
                ft_putnbr(sb.num[i]);
                ft_putchar('\n');
            }
            ft_putstr("_______________________________________________");
        ft_putchar('\n');
    ft_putnbr(sa->top);
          ft_putstr("_______________________________________________\n");
    ft_sort(sa, sb);
}