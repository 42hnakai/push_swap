/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnakai <hnakai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 13:37:40 by hnakai            #+#    #+#             */
/*   Updated: 2023/06/23 15:02:44 by hnakai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int ft_push_swap(int *ary_a_cc, int *ary_b, int argc)
{
	if (argc == 4) // the number of argument is 3
		ft_3(ary_a_cc, ary_b);
	else if (argc < 6) // the number of argument is 5 or less
		ft_5_or_less(ary_a_cc, ary_b);
	else // the number of argument is more than 6
		ft_more_than_6(ary_a_cc, ary_b);
}

int main(int argc, char *argv[])
{
	int *ary_a;
	int *ary_b;
	int *ary_a_cc;
	int i;
	int j;

	i = 0;
	j = 0;
	ary_a = (int *)malloc(sizeof(int) * argc);
	ary_b = (int *)malloc(sizeof(int) * argc);
	if (argc > 3)
	{
		while (argv[i + 1] != NULL)
		{
			ary_a[i] = ft_atoi(&argv[i + 1][0]); // コマンドライン引数の文字列を数字に変換&&コピー
			i++;
		}
		ary_a[i] = '\0'; // 文字列の終わりを示すヌル文字を追加
		printf("Before swap: ");
		while (ary_a[j] != '\0')
		{
			printf("%d ", ary_a[j]);
			j++;
		}
		printf("\n");
		ary_a_cc = ft_compressCoordinates(ary_a, argc); //座標圧縮をする関数
		ary_a = ft_push_swap(ary_a_cc, ary_b, argc);	//実際にpush_swapする
		j = 0;
		printf("After  swap: ");
		while (ary_b[j] != '\0')
		{
			printf("%d ", ary_b[j]);
			j++;
		}
		printf("\n");
	}
	return (0);
}
