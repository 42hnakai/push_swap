/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnakai <hnakai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 22:30:59 by hnakai            #+#    #+#             */
/*   Updated: 2023/07/10 20:41:40 by hnakai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <stdbool.h>

typedef struct
{
	int	min;
	int	max;
} max_min;

// push_swapフォルダ下にあるファイル内の関数を宣言
void	sa(int *ary_a);
void	sb(int *ary_b);
void	ss(int *ary_a, int *ary_b);
void	pa(int *ary_a, int *ary_b, int len_a, int len_b);
void	pb(int *ary_a, int *ary_b, int len_a, int len_b);
void	ra(int *ary_a, int len_a);
void	rb(int *ary_b,int len_b);
void	rr(int *ary_a, int *ary_b,int len_a,int len_b);
void	rra(int *ary_a,int len_a);
void	rrb(int *ary_b,int len_b);
void	rrr(int *ary_a, int *ary_b,int len_a,int len_b);

// libft files
int		ft_isdigit(int c);
int		ft_atoi(const char *str);
size_t	ft_strlen_char(const char *str);
size_t	ft_strlen(const int *str);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
char	**ft_split(char const *s, char c);

int	*coordcomp(int *ary, int count);

// sort files
void	sort_two(int *ary);
void	sort_three(int *ary, int len_x);
void	sort_four(int *ary_x, int *ary_y, int len_x, int len_y);
void	sort_five(int *ary_x, int *ary_y, int len_x, int len_y);
void	sort_many(int *ary_a, int *ary_b, int k, int *num);
void	sort_small(int *ary_x, int *ary_y, int len_x, int len_y);
int		midian(int *ary,int count);
max_min	get_max_min(int *ary,int len);
int		min_index_sign(int *ary,int len);
bool	is_sorted(int *ary);
int		reduce_b_three(int *ary_x, int *ary_y, int len_x, int len_y, int count);
void	swap(int *x, int *y);
void	half_a(int *ary_x, int *ary_y, int len);
int		half_b(int *ary_x, int *ary_y, int len);
int		push_a_to_b(int *ary_a, int *ary_b, int n);
void	sort_tiny(int *ary_x, int *ary_y, int len_x, int len_y);

bool	has_dups(int *ary);
bool	is_validnum(char *ary);
#endif