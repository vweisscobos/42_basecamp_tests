#include <stdio.h>

int ft_recursive_power(int nb, int power);

int main(void)
{
	printf("Input: num 1, power 0\n");
	printf("Expected:\n1\n");
	printf("Output:\n");
	printf("%d\n", ft_recursive_power(1, 0));
	printf("\n");
	printf("Input: num 10, power 0\n");
	printf("Expected:\n1\n");
	printf("Output:\n");
	printf("%d\n", ft_recursive_power(10, 0));
	printf("\n");
	printf("Input: num 0, power 0\n");
	printf("Expected:\n1\n");
	printf("Output:\n");
	printf("%d\n", ft_recursive_power(0, 0));
	printf("\n");
	printf("Input: num 10, power 2\n");
	printf("Expected:\n100\n");
	printf("Output:\n");
	printf("%d\n", ft_recursive_power(10, 2));
	printf("\n");
	printf("Input: num -10, power 2\n");
	printf("Expected:\n100\n");
	printf("Output:\n");
	printf("%d\n", ft_recursive_power(-10, 2));
	printf("\n");
	printf("Input: num -2, power 3\n");
	printf("Expected:\n-8\n");
	printf("Output:\n");
	printf("%d\n", ft_recursive_power(-2, 3));
	printf("\n");
	printf("Input: num 10, power -1\n");
	printf("Expected:\n0\n");
	printf("Output:\n");
	printf("%d\n", ft_recursive_power(10, -1));
	return (0);
}