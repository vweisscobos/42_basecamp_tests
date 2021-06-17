#include <stdio.h>

int ft_find_next_prime(int nb);

int main(void)
{
	printf("1 - expected: 2, output: %d\n", ft_find_next_prime(1));
	printf("2 - expected: 2, output: %d\n", ft_find_next_prime(2));
	printf("3 - expected: 3, output: %d\n", ft_find_next_prime(3));
	printf("4 - expected: 5, output: %d\n", ft_find_next_prime(4));
	printf("5 - expected: 5, output: %d\n", ft_find_next_prime(5));
	printf("6 - expected: 7, output: %d\n", ft_find_next_prime(6));
	printf("7 - expected: 7, output: %d\n", ft_find_next_prime(7));
	printf("8 - expected: 11, output: %d\n", ft_find_next_prime(8));
	printf("9 - expected: 11, output: %d\n", ft_find_next_prime(9));
	printf("10 - expected: 11, output: %d\n", ft_find_next_prime(10));
	printf("11 - expected: 11, output: %d\n", ft_find_next_prime(11));
	printf("-10 - expected: 2, output: %d\n", ft_find_next_prime(-10));
	printf("2147483647 - expected: 2147483647, output: %d\n", ft_find_next_prime(2147483647));
	return (0);
}
