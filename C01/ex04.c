#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
	int a;
	int b;
	int *pt_a;
	int *pt_b;

	pt_a = &a;
	pt_b = &b;

	a = 5;
	b = 2;
	ft_ultimate_div_mod(pt_a, pt_b);
	if (a == 2 && b == 1)
	{
		printf("OK!");
	}
	else 
	{
		printf("KO!");
	}
}