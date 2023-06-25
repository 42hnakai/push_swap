#include "ft_push_swap.h"

int *ft_compressCoordinates(int *ary, int argc)
{
    int *ary_new;
    ary_new = (int *)malloc(sizeof(int) * argc);
    int i;
    int j;
    int min_old;
    int min_new;

    j = 0;
    min_old = INT_MIN;
    while (j < argc)
    {
        i = 0;
        min_new = INT_MAX;
        while (i < argc)
        {
            if (min_old < ary[i] && ary[i] < min_new)
            {
                min_new = ary[i];
                ary_new[i] = j;
            }
            i++;
        }
        min_old = min_new;
        j++;
    }
    return (ary_new);
}
