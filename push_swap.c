/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnakai <hnakai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 13:37:40 by hnakai            #+#    #+#             */
/*   Updated: 2023/07/09 23:35:22 by hnakai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push_swap(int *ary_a, int *ary_b, int argc)
{
	int i;
	int *num;

	i = 0;
	if (is_sorted(ary_a) == true)
		return;
	else if (argc<= 5)
		sort_tiny(ary_a, ary_b, argc);
	else
	{
		num = (int *)malloc(sizeof(int) * (argc));
		if (num == NULL)
		{
			free(ary_a);
			free(ary_b);
			return;
		}
		else
		{
			// for(int j=0;j<18;j++)
			// 	printf("%d\n",ary_a[j]);
			num[1] = argc / 2;
			num[0] = argc - num[1];
			sort_many(ary_a, ary_b, 1, num);
			free(num);
		}
	}
}

// __attribute__((destructor)) static void destructor()
// {
//     system("leaks -q push_swap");
// }

int main(int argc, char *argv[])
{
	int *ary_a;
	int *ary_b;
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
	ary_a = (int *)malloc(sizeof(int) * count);
	if (ary_a == NULL)
		return (0);
	ary_b = (int *)calloc(1, sizeof(int) * count);
	if (ary_b == NULL)
		return (0);
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
				ary_a[k] = ft_atoi(ary_c[j]);
				k++;
				j++;
			}
			i++;
			j = 0;
		}
		ary_a[k] = '\0';
		comp_ary = coordcomp(ary_a, count);
		if (has_dups(comp_ary))
			printf("error\n");
		else
			push_swap(comp_ary, ary_b, count);
	}
	free(ary_a);
	free(ary_b);
	return (0);
}
