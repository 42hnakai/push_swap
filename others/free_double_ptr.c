#include "../push_swap.h"

void	free_double_ptr(char **ary)
{
	int i;

	i = 0;
	while (ary[i] != NULL)
	{
		free(ary[i]);
		i++;
	}
	free(ary);
}