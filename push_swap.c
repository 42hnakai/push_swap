#include "push_swap.h"

void push_swap(t_ary_info aryinfo)
{
	int *num;
	if (aryinfo.len_a <= 5)
		sort_tiny(aryinfo);
	else
	{
		num = (int *)malloc(sizeof(int) * aryinfo.len_a);
		if (num == NULL)
			return;
		else
		{
			num[1] = aryinfo.len_a / 2;
			num[0] = aryinfo.len_a - num[1];
			sort_many(aryinfo, 1, num, 1);
			free(num);
		}
	}
}

int main(int argc, char *argv[])
{
	t_ary_info aryinfo;

	if (is_error(argc, argv) == true)
	{
		printf("Error\n");
		return (0);
	}
	aryinfo.len_a = malloc_size(argc, argv);
	aryinfo.len_b = 0;
	if (malloc_a_b(&aryinfo) == false)
		return (0);
	set_ary_a(argc, argv, aryinfo.ary_a);
	aryinfo.ary_a = compress_coords(aryinfo.ary_a, aryinfo.len_a);
	if (has_dups(aryinfo.ary_a, aryinfo.len_a) == true)
	{
		printf("Error\n");
		exit(1);
	}
	if (is_sorted(aryinfo.ary_a, aryinfo.len_a) == true)
	{
		free(aryinfo.ary_a);
		free(aryinfo.ary_b);
		return (0);
	}
	push_swap(aryinfo);
	free(aryinfo.ary_a);
	free(aryinfo.ary_b);
	return (0);
}
