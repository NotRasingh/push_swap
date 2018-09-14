/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 10:22:02 by rasingh           #+#    #+#             */
/*   Updated: 2018/09/14 13:38:58 by rasingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

int		ft_addnum(t_stack *sa, char *num)
{
	int i;

	i = 0;
	while (num[i] != ' ' && num[i])
		i++;
	sa->num[sa->top++] = ft_atoi(num);
	return (i);
}

void	ft_check(t_stack sa, t_stack sb)
{
	int	i;
	int	tmp;

	i = 1;
	if (sb.top != 0)
	{
		ft_putendl("KO");
		return ;
	}
	tmp = sa.num[0];
	while (i < sa.top)
	{
		if (sa.num[i] < tmp)
		{
			ft_putendl("KO");
			return ;
		}
		tmp = sa.num[i];
		i++;
	}
	ft_putendl("OK");
}

int		ft_op(t_stack *sa, t_stack *sb, char *str)
{
	if (ft_strcmp(str, "sa") == 0)
		ft_swapa(sa);
	else if (ft_strcmp(str, "sb") == 0)
		ft_swapb(sb);
	else if (ft_strcmp(str, "ss") == 0)
		ft_swapboth(sa, sb);
	else if (ft_strcmp(str, "pa") == 0)
		ft_pusha(sb, sa);
	else if (ft_strcmp(str, "pb") == 0)
		ft_pushb(sa, sb);
	else if (ft_strcmp(str, "ra") == 0)
		ft_rota(sa);
	else if (ft_strcmp(str, "rb") == 0)
		ft_rotb(sb);
	else if (ft_strcmp(str, "rr") == 0)
		ft_rotateboth(sa, sb);
	else if (ft_strcmp(str, "rra") == 0)
		ft_revrota(sa);
	else if (ft_strcmp(str, "rrb") == 0)
		ft_revrotb(sb);
	else if (ft_strcmp(str, "rrr") == 0)
		ft_revrotateboth(sa, sb);
	else
		return (1);
	return (0);
}

void	ft_getop(t_stack sa)
{
	char	*line;
	int		ret;
	t_stack	sb;

	sb.top = 0;
	sb.num = (long*)malloc(BUFF_SIZE);
	ret = 1;
	line = NULL;
	while (ret)
	{
		ret = get_next_line(0, &line);
		if (!ret)
			break ;
		if (ft_op(&sa, &sb, line))
		{
			ft_putstr_fd("Error\n", 2);
			exit(0);
		}
		free(line);
	}
	ft_check(sa, sb);
	free((void*)sa.num);
	free((void*)sb.num);
}

int		main(int argc, char **argv)
{
	t_stack sa;

	if (ft_error(argc, argv))
		return (0);
	sa = ft_init(argc, argv);
	if (sa.top == 0)
		return (0);
	if (ft_dupcheck(sa))
		return (0);
	ft_getop(sa);
	return (0);
}
