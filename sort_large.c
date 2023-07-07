#include "push_swap.h"

void sort_many(int *ary_a, int *ary_b, int k, int *num, int flag)
{
	int i;

	i = 0;
	if (num[0] == 0)
		return;
	if (flag == 0)
		half_a(ary_a, ary_b, ft_strlen(ary_a));
	else
		push_a_to_b(ary_a, ary_b, num[k]);
	num[k] = 0;
	while (ft_strlen(ary_b) > 25) // ary_bの要素数が25以下になるまでpush_b_to_aする
	{
		num[k] = half_b(ary_a, ary_b, ft_strlen(ary_b));
		k = k + 1;
	}
	if (ft_strlen(ary_b) == 0)
		return;
	else
	{
		sort_small(ary_a, ary_b, ft_strlen(ary_b));
		sort_many(ary_a, ary_b, k - 1, num, 1);
	}
}
