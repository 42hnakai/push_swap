/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnakai <hnakai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 13:37:40 by hnakai            #+#    #+#             */
/*   Updated: 2023/07/11 22:01:35 by hnakai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push_swap(t_ary_info aryinfo)
{
	int i;
	int *num;

	i = 0;
	if (is_sorted(aryinfo.ary_a) == true)
		return;
	else if (aryinfo.len_a <= 5)
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
			// free(num);
		}
	}
}

__attribute__((destructor)) static void destructor()
{
	system("leaks -q push_swap");
}

int main(int argc, char *argv[])
{
	t_ary_info aryinfo;
	char **ary_c;
	int *comp_ary;
	size_t i;
	int j;
	int k;
	int count;

	i = 1;
	j = 0;
	k = 0;
	count = 0;
	while (argv[i] != NULL)
	{
		ary_c = ft_split(argv[i], ' ');
		while (ary_c[j] != NULL)
		{
			j++;
		}
		count += j;
		i++;
		j = 0;
	}
	aryinfo.ary_a = (int *)malloc(sizeof(int) * count);
	if (aryinfo.ary_a == NULL)
		return (0);
	aryinfo.ary_b = (int *)malloc(sizeof(int) * count);
	if (aryinfo.ary_b == NULL)
	{
		free(aryinfo.ary_a);
		return (0);
	}
	i = 1;
	j = 0;
	if (argc > 1)
	{
		while (argv[i] != NULL)
		{
			while (ary_c[j] != NULL)
			{
				ary_c = ft_split(argv[i], ' ');
				if (!(is_validnum(ary_c[j])))
				{
					printf("error\n");
					return (0);
				}
				aryinfo.ary_a[k] = ft_atoi(ary_c[j]);
				k++;
				j++;
			}
			i++;
			j = 0;
		}
	}
	comp_ary = coordcomp(aryinfo.ary_a, count);
	aryinfo.ary_a = comp_ary;
	aryinfo.len_a = count;
	aryinfo.len_b = 0;
	if (has_dups(comp_ary))
		printf("error\n");
	else
		push_swap(aryinfo);
	free(comp_ary);
	free(aryinfo.ary_a);
	free(aryinfo.ary_b);
	return (0);
}
