#include <stdio.h>

int ft_is_prime(int nb);

int main(void)
{
	printf("1 - expected: 0 | output: %d\n", ft_is_prime(1));
	printf("2 - expected: 1 | output: %d\n", ft_is_prime(2));
	printf("3 - expected: 1 | output: %d\n", ft_is_prime(3));
	printf("4 - expected: 0 | output: %d\n", ft_is_prime(4));
	printf("5 - expected: 1 | output: %d\n", ft_is_prime(5));
	printf("6 - expected: 0 | output:  %d\n", ft_is_prime(6));
	printf("7 - expected: 1 | output: %d\n", ft_is_prime(7));
	printf("8 - expected: 0 | output: %d\n", ft_is_prime(8));
	printf("9 - expected: 0 | output: %d\n", ft_is_prime(9));
	printf("10 - expected: 0 | output: %d\n", ft_is_prime(10));
	printf("11 - expected: 1 | output: %d\n", ft_is_prime(11));
	printf("12 - expected: 0 | output: %d\n", ft_is_prime(12));
	printf("-10 - expected: 0, output: %d\n", ft_is_prime(-10));
	printf("2147483647 - expected: 1 | output: %d\n", ft_is_prime(2147483647));
	return (0);
}
