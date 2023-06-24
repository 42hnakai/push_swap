#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>

// push_swapフォルダ下にあるファイル内の関数を宣言
void ft_sa(int *ary_a);
void ft_sb(int *ary_b);
void ft_ss(int *ary_a, int *ary_b);
void ft_pa(char *ary_a, char *ary_b);
void ft_pb(char *ary_a, char *ary_b);
void ft_ra(char *ary_a);
void ft_rb(char *ary_b);
void ft_rr(char *ary_a, char *ary_b);
void ft_rra(char *ary_a);
void ft_rrb(char *ary_b);
void ft_rrr(char *ary_a, char *ary_b);
void ft_swap(int *x, int *y);
int ft_isdigit(int c);
int ft_atoi(const char *str);
size_t ft_strlen(const char *str);

#endif