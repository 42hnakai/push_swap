#include "../push_swap.h"

bool malloc_a_b(t_ary_info *aryinfo)
{
	aryinfo->ary_a = (int *)malloc(sizeof(int) * aryinfo->len_a);
	if (aryinfo->ary_a == NULL)
		return (false);
	aryinfo->ary_b = (int *)malloc(sizeof(int) * aryinfo->len_a);
	if (aryinfo->ary_b == NULL)
	{
		free(aryinfo->ary_a);
		return (false);
	}
	return (true);
}
