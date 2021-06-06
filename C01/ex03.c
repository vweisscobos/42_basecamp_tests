#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
	int a;
	int b;
	int div;
	int mod;
	int *pt_div;
	int *pt_mod;

	pt_div = &div;
	pt_mod = &mod;

	a = 5;
	b = 2;
	ft_div_mod(a, b, pt_div, pt_mod);

	if (div == 2 && mod == 1)
	{
		printf("OK!");
	}
	else
	{
		printf("KO!");
	}
}
