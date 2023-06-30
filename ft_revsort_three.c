#include "ft_push_swap.h"

void ft_revsort_three(int *ary_b)
{
    if (ary_b[0] < ary_b[1] && ary_b[0] < ary_b[2])
    {
        if (ary_b[1] < ary_b[2])
        {
            ft_sb(ary_b);
            ft_rrb(ary_b);
        }
        else
            ft_rb(ary_b);
    }
    else if (ary_b[1] < ary_b[0] && ary_b[1] < ary_b[2])
    {
        if (ary_b[0] < ary_b[2])
            ft_rrb(ary_b);
        else
        {
            ft_rb(ary_b);
            ft_sb(ary_b);
            ft_rrb(ary_b);
        }
    }
    else if (ary_b[2] < ary_b[0] && ary_b[2] < ary_b[1])
    {
        if (ary_b[0] < ary_b[1])
            ft_sb(ary_b);
        else
            return;
    }
}