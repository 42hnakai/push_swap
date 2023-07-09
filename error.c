#include "push_swap.h"

bool has_dups(int *ary)
{
	size_t i;
	size_t j;

	i = 0;
	j = 1;
	while(i < ft_strlen(ary))
	{
		while(i + j < ft_strlen(ary))
		{
			if(ary[i] == ary[i + j])
				return (true);
			j++;
		}
		i++;
		j = 1;
	}
	return (false);
}

// bool in_range(int *ary)
// {
// 	int i;
// 	while(i < ft_strlen())
// }

bool is_validnum(char *ary)
{
	int i;

	i = 0;
	if(ary[0] == '-' || ary[0] == '+')
	{
		while(ary[i + 1] != '\0')
		{
			if( ary[i + 1] < '0' ||'9' < ary[i + 1])
				return (false);
			i++;
		}
	}
	else
	{
		while(ary[i] != '\0')
		{
			if(ary[i] < '0' ||'9' < ary[i])
				return (false);
			i++;
		}
	}
	return (true);
}

bool error(int *ary)
{
	if(has_dups(ary))
		return (true);
	return (false);
}