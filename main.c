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

int main(int argc, char *argv[])
{
	int *ary_a;
	int *ary_b;
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
		ft_sa(ary_a);
		j = 0;
		printf("After  swap: ");
		while (ary_a[j] != '\0')
		{
			printf("%d ", ary_a[j]);
			j++;
		}
		printf("\n");
	}
	return (0);
}
