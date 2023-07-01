#include "ft_push_swap.h"

// ary_xのものをary_yを使ってソートする
void ft_sort_five_x(int *ary_x, int *ary_y, int argc)
{
    int count;
    max_min max_min;

    count = 0;
    max_min = ft_max_min(ary_y);
    if (argc == 4)
    {
        while (ft_strlen(ary_y) > 3)
        {
            if (ary_y[0] == max_min.max)
                ft_pa(ary_x, ary_y);
            else
                ft_rb(ary_y);
        }
        ft_revsort_three(ary_y);
        ft_pa(ary_x, ary_y);
        ft_pa(ary_x, ary_y);
        ft_pa(ary_x, ary_y);
    }
    else
    {
        while (ft_strlen(ary_y) > 3)
        {
            if (ary_y[0] == max_min.min)
            {
                ft_pa(ary_x, ary_y);
                ft_ra(ary_x);
            }
            else if (ary_y[0] == max_min.max)
                ft_pa(ary_x, ary_y);
            else
                ft_rb(ary_y);
        }
        ft_revsort_three(ary_y);
        ft_pa(ary_x, ary_y);
        ft_pa(ary_x, ary_y);
        ft_pa(ary_x, ary_y);
        ft_ra(ary_x);
        ft_ra(ary_x);
        ft_ra(ary_x);
        ft_ra(ary_x);
    }
}