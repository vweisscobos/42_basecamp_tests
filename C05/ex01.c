#include <stdio.h>

int ft_recursive_factorial(int nb);

int main(void)
{
	printf("Input: 1\n");
	printf("Expected:\n1\n");
	printf("Output:\n");
	printf("%d\n", ft_recursive_factorial(1));
	printf("\n");
	printf("Input: 4\n");
	printf("Expected:\n24\n");
	printf("Output:\n");
	printf("%d\n", ft_recursive_factorial(4));
	printf("\n");
	printf("Input: 0\n");
	printf("Expected:\n1\n");
	printf("Output:\n");
	printf("%d\n", ft_recursive_factorial(0));
	printf("\n");
	printf("Input: -10\n");
	printf("Expected:\n0\n");
	printf("Output:\n");
	printf("%d\n", ft_recursive_factorial(-10));
	return (0);
}