/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnakai <hnakai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 13:37:40 by hnakai            #+#    #+#             */
/*   Updated: 2023/07/07 23:53:27 by hnakai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(int *ary_a, int *ary_b, int argc)
{
	int	i;
	int	*num;

	i = 0;
	if (is_sorted(ary_a) == true)
		return ;
	else if ((argc - 1) <= 5)
		sort_tiny(ary_a, ary_b, argc - 1);
	else
	{
		num = (int *)calloc(1, sizeof(int) * (argc / 25 + 2));
		if (num == NULL)
		{
			free(ary_a);
			free(ary_b);
			return ;
		}
		else
		{
			num[1] = (argc - 1) / 2;
			num[0] = (argc - 1) - num[1];
			sort_many(ary_a, ary_b, 1, num);
			free(num);
		}
	}
}

int	main(int argc, char *argv[])
{
	int	*ary_a;
	int	*ary_b;
	int	*comp_ary;
	int	i;

	i = 0;
	ary_a = (int *)malloc(sizeof(int) * argc);
	if (ary_a == NULL)
		return (0);
	ary_b = (int *)calloc(1, sizeof(int) * argc);
	if (ary_b == NULL)
		return (0);
	if (argc > 2)
	{
		while (argv[i + 1] != NULL)
		{
			ary_a[i] = ft_atoi(&argv[i + 1][0]);
			i++;
		}
		ary_a[i] = '\0';
		comp_ary = coordcomp(ary_a, argc);
		push_swap(comp_ary, ary_b, argc);
	}
	return (0);
}
