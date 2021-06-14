#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);

int main(void)
{
	int num;
	char *base;

	base = "01";
	num = 2;
	printf("nbr: %d, base: %s\n", num, base);
	printf("Expected:\n10\n");
	printf("Output:\n");
	ft_putnbr_base(num, base);
	printf("\n");
	num = -2;
	printf("nbr: %d, base: %s\n", num, base);
	printf("Expected:\n-10\n");
	printf("Output:\n");
	ft_putnbr_base(num, base);
	printf("\n");
	base = "0123456789";
	num = -2147483648;
	printf("nbr: %d, base: %s\n", num, base);
	printf("Expected:\n-2147483648\n");
	printf("Output:\n");
	ft_putnbr_base(num, base);
	printf("\n");
	num = 2147483647;
	printf("nbr: %d, base: %s\n", num, base);
	printf("Expected:\n2147483647\n");
	printf("Output:\n");
	ft_putnbr_base(num, base);
	printf("\n");
	num = 255;
	base = "0123456789abcdef";
	printf("nbr: %d, base: %s\n", num, base);
	printf("Expected:\nff\n");
	printf("Output:\n");
	ft_putnbr_base(num, base);
	printf("\n");
	num = 255;
	base = "";
	printf("nbr: %d, base: %s\n", num, base);
	printf("Expected:\n");
	printf("Output:\n");
	ft_putnbr_base(num, base);
	printf("\n");
	base = "1";
	printf("nbr: %d, base: %s\n", num, base);
	printf("Expected:\n");
	printf("Output:\n");
	ft_putnbr_base(num, base);
	printf("\n");
	base = "11";
	printf("nbr: %d, base: %s\n", num, base);
	printf("Expected:\n");
	printf("Output:\n");
	ft_putnbr_base(num, base);
	printf("\n");
	return (0);
}
