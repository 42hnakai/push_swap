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
			free(num);
	}
}


// __attribute__((destructor)) static void destructor()
// {
//     system("leaks -q push_swap");
// }

int	main(int argc, char *argv[])
{
	int	*ary_a;
	int	*ary_b;
	char **ary_c;
	int	*comp_ary;
	size_t	i;
	int j;
	int k;

	i = 1;
	j = 0;
	k = 0;
	ary_a = (int *)malloc(sizeof(int) * argc);
	if (ary_a == NULL)
		return (0);
	ary_b = (int *)calloc(1, sizeof(int) * argc);
	if (ary_b == NULL)
		return (0);
	if (argc > 1)
	{
		while(argv[i] != NULL)
		{
			ary_c = ft_split(argv[i],' ');
			while(ary_c[j] != NULL)
			{
				if(!(is_validnum(ary_c[j])))
				{
					printf("error\n");
					return (0);
				}
				ary_a[k]=ft_atoi(ary_c[j]);
				k++;
				j++;
			}
			i++;
			j = 0;
		}
		ary_a[k] = '\0';
		comp_ary = coordcomp(ary_a, argc - 1);
		if(has_dups(comp_ary))
			printf("error\n");
		else
			push_swap(comp_ary, ary_b, argc);
	}
	free(ary_a);
	free(ary_b);
	return (0);
}
