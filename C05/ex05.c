#include <stdio.h>

int ft_sqrt(int nb);

int main(void)
{
	printf("Input: 0\n");
	printf("Expected:\n0\n");
	printf("Output:\n");
	printf("%d\n", ft_sqrt(0));
	printf("\n");
	printf("Input: 1\n");
	printf("Expected:\n1\n");
	printf("Output:\n");
	printf("%d\n", ft_sqrt(1));
	printf("\n");
	printf("Input: 3\n");
	printf("Expected:\n0\n");
	printf("Output:\n");
	printf("%d\n", ft_sqrt(3));
	printf("\n");
	printf("Input: 4\n");
	printf("Expected:\n2\n");
	printf("Output:\n");
	printf("%d\n", ft_sqrt(4));
	printf("\n");
	printf("Input: 7\n");
	printf("Expected:\n0\n");
	printf("Output:\n");
	printf("%d\n", ft_sqrt(7));
	printf("\n");
	printf("Input: 9\n");
	printf("Expected:\n3\n");
	printf("Output:\n");
	printf("%d\n", ft_sqrt(9));
	printf("\n");
	printf("Input: 100\n");
	printf("Expected:\n10\n");
	printf("Output:\n");
	printf("%d\n", ft_sqrt(100));
	printf("\n");
	printf("Input: -25\n");
	printf("Expected:\n0\n");
	printf("Output:\n");
	printf("%d\n", ft_sqrt(-25));
	printf("\n");
	printf("Input: 247483647\n");
	printf("Expected:\n0\n");
	printf("Output:\n");
	printf("%d\n", ft_sqrt(2147483647));
	printf("\n");
	return (0);
}