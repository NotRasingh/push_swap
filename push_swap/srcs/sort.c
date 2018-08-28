#include "../includes/pushswap.h"

long ft_lowest(t_stack sa)
{
	long small;
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
	if (ft_lowest(*sa) == sa->num[0] && sa->num[1] > sa->num[2])
	{
		ft_rota(sa);
		ft_swapa(sa);
		ft_revrota(sa);
	}
	else if (ft_lowest(*sa) == sa->num[1] && sa->num[0] < sa->num[2])
	{
		ft_revrota(sa);
		ft_swapa(sa);
		ft_revrota(sa);
	}
	else if (ft_lowest(*sa) == sa->num[1] && sa->num[0] > sa->num[2])
		ft_rota(sa);
	else if (ft_lowest(*sa) == sa->num[2] && sa->num[0] < sa->num[1])
		ft_revrota(sa);
	else if (ft_lowest(*sa) == sa->num[2] && sa->num[0] > sa->num[1])
	{
		ft_swapa(sa);
		ft_revrota(sa);
	}	
	while (sb.top > 0)
		ft_pusha(&sb, sa);
}
void    ft_splitstack(t_stack *sa)
{
	t_stack sb;
	long low;

	sb.top = 0;
	sb.num = (long *)malloc(BUFF_SIZE);
	while (sa->top > 3)
	{
		low = ft_lowest(*sa);
		if (low < sa->top / 2)
		{
			while (sa->num[0] != low)
				ft_revrota(sa);
		}
		else
		{
			while (sa->num[0] != low)
				ft_rota(sa);
		}
		ft_pushb(sa, &sb);
	}
	ft_sort(sa, sb);
}
