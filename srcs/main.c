#include "../includes/checker.h"
#include <stdio.h>

int main(void)
{
	t_stack s;
	t_stack b;
	int	i = 0;
	printf("BEGIN\n");
	b.num = malloc(sizeof(long) * 5);
	b.top = i;
	s.num = malloc(sizeof(long) * 5);
	s.top = i;
	while (i <= 5)
	{
		s.num[i] = i;
		printf("NUM: << %ld >>\n",s.num[i]);
		s.top = i;
		i++;
	}
	i = 0;
	printf("\n\n\n\nBEGIN\n");
	while (i <= 5)
    {
		ft_push(&b, &s);
        printf("PUSH: << %ld >>\n",b.num[i]);
        i++;
    }
	printf("TOP : << %ld >>\n", b.top);
	return (0);
}
