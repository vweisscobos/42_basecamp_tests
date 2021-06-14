#include <stdio.h>

void	ft_putnbr(int nb);

int main(void)
{
	printf("Expected:\n0\n");
	printf("Output:\n");
	ft_putnbr(0);
	printf("\n");
	printf("Expected:\n-2147483648\n");
	printf("Output:\n");
	ft_putnbr(-2147483648);
	printf("\n");
	printf("Expected:\n2147483647\n");
	printf("Output:\n");
	ft_putnbr(2147483647);
	printf("\n");
	printf("Expected:\n-10\n");
	printf("Output:\n");
	ft_putnbr(-10);
	printf("\n");
	return (0);
}
