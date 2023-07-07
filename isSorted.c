#include "push_swap.h"

bool is_sorted(int *ary)
{
	int i;
	i = 0;
	while (ary[i + 1] != '\0')
	{
		if (ary[i] > ary[i + 1])
			return (false);
		else
			i++;
	}
	return (true);
}