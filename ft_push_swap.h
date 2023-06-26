#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

// push_swapフォルダ下にあるファイル内の関数を宣言
void	ft_sa(int *ary_a);
void	ft_sb(int *ary_b);
void	ft_ss(int *ary_a, int *ary_b);
void	ft_pa(int *ary_a, int *ary_b);
void	ft_pb(int *ary_a, int *ary_b);
void	ft_ra(int *ary_a);
void	ft_rb(int *ary_b);
void	ft_rr(int *ary_a, int *ary_b);
void	ft_rra(int *ary_a);
void	ft_rrb(int *ary_b);
void	ft_rrr(int *ary_a, int *ary_b);

void	ft_swap(int *x, int *y);
int		ft_isdigit(int c);
int		ft_atoi(const char *str);
size_t	ft_strlen(const int *str);

int		*ft_compressCoordinates(int *ary, int argc);

void	ft_3(int *ary_a_cc, int *ary_b);
void	ft_5_or_less(int *ary_a_cc, int *ary_b);
void	ft_more_than_6(int *ary_a_cc, int *ary_b);

#endif