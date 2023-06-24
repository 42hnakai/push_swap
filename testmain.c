#include "ft_push_swap.h"
#include <stdlib.h>

int	main(void)
{
	char	*A;
	char	*B;

	A = (char *)malloc(sizeof(char) * 8);
	B = (char *)malloc(sizeof(char) * 8);
	if (A == NULL || B == NULL)
	{
		printf("Memory allocation failed\n");
		return (1);
	}
	strncpy(A, "12345", 6);
	strncpy(B, "67890", 6);
	printf("Before A: %s\n", A);
	printf("Before B: %s\n", B);
	ft_sb(A);
	printf("After A: %s\n", A);
	printf("After B: %s\n", B);
	return (0);
}
