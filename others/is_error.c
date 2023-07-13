#include "../push_swap.h"

bool is_validnum(char **ary)
{
	int i;
	int j;

	i = 0;
	while (ary[i] != NULL)
	{
		j = 0;
		if (ary[i][j] == '-' || ary[i][j] == '+')
		{
			while (ary[i][j + 1] != '\0')
			{
				if (ary[i][j + 1] < '0' || '9' < ary[i][j + 1])
					return (false);
				j++;
			}
		}
		else
		{
			while (ary[i][j] != '\0')
			{
				if (ary[i][j] < '0' || '9' < ary[i][j])
					return (false);
				j++;
			}
		}
		i++;
	}
	return (true);
}

bool has_dups(int *ary, size_t len_ary)
{
	size_t i;
	size_t j;

	i = 0;
	j = 1;
	while (i < len_ary)
	{
		while (i + j < len_ary)
		{
			if (ary[i] == ary[i + j])
				return (true);
			j++;
		}
		i++;
		j = 1;
	}
	return (false);
}

bool in_range(char **ary)
{
	int i;

	i = 0;
	long num;
	while (ary[i] != NULL)
	{
		num = ft_atoi(ary[i]);
		if (num < INT_MIN || INT_MAX < num)
			return (false);
		i++;
	}
	return (true);
}

bool is_error(int argc, char **argv)
{
	char **ary_num;
	int size;
	int i;

	i = 1;
	size = malloc_size(argc, argv);
	if (size == -1)
		return (true);
	while (i < argc)
	{
		ary_num = ft_split(argv[i], ' ');
		if (ary_num == NULL)
			return (true);
		else if (is_validnum(ary_num) == false || in_range(ary_num) == false)
		{
			free_double_ptr(ary_num);
			return (true);
		}
		free_double_ptr(ary_num);
		i++;
	}
	return (false);
}
