#include "../push_swap.h"

int *set_ary_a(int argc, char **argv, int *ary_a)
{
	int i;
	int j;
	int k;
	char **ary_c;

	i = 1;
	k = 0;

	while (i < argc)
	{
		j = 0;
		ary_c = ft_split(argv[i], ' ');
		while (ary_c != NULL && ary_c[j] != NULL)
		{
			ary_a[k] = (int)ft_atoi(ary_c[j]);
			free(ary_c[j]);
			j++;
			k++;
		}
		i++;
		free(ary_c);
	}
	return (ary_a);
}
