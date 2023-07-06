#include "push_swap.h"

void sort_many(int *ary_a_cc, int *ary_b, int k, int *num, int flag)
{
	int p_count;
	int mid;
	int i;
	int j;
	int len_b;
	int count;
	i = 0;
	j = 0;
	len_b = 0;
	count = 0;
	if (num[0] == 0)
		return;
	if (flag == 0)
	{
		while (i < (num[0] + num[1]))
		{
			if (ary_a_cc[0] <= num[1])
			{
				pb(ary_a_cc, ary_b);
				count++;
			}
			else
				ra(ary_a_cc);
			i++;
			if (count == num[1])
				break;
		}
	}
	else if (flag == 1)
	{
		while (i < num[k]) // num[i]個をary_bに移動させる
		{
			if (ary_a_cc[0] == (ary_a_cc[ft_strlen(ary_a_cc) - 1] + 1))
				ra(ary_a_cc);
			else
				pb(ary_a_cc, ary_b);
			i++;
		}
	}
	len_b = ft_strlen(ary_b);
	num[k] = 0;
	while (len_b > 25) // ary_bの要素数が３以下になるまでpush_aする
	{
		j = 0;
		p_count = 0;
		count = 0;
		mid = midian(ary_b);
		while (j < len_b)
		{
			if (ary_b[0] >= mid)
			{
				pa(ary_a_cc, ary_b);
				p_count += 1;
			}
			else
				rb(ary_b);
			j++;
		}
		len_b = ft_strlen(ary_b);
		num[k] = p_count;
		k = k + 1;
	}
	if (len_b == 0)
		return;
	else if (len_b == 1)
	{
		pa(ary_a_cc, ary_b);
		ra(ary_a_cc);
		sort_many(ary_a_cc, ary_b, k - 1, num, 1);
	}
	else if (len_b == 2)
	{
		pa(ary_a_cc, ary_b);
		pa(ary_a_cc, ary_b);
		if (ary_a_cc[0] > ary_a_cc[1])
			sa(ary_a_cc);
		ra(ary_a_cc);
		ra(ary_a_cc);
	}
	else if (len_b <= 25)
	{
		sort8to25(ary_a_cc, ary_b);
		sort_many(ary_a_cc, ary_b, k - 1, num, 1);
	}
}