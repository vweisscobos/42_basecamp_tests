#include <stdio.h>
void ft_swap(int *a, int *b);

int main(void)
{
	int a = 10;
	int b = 15;
	int *c;
	int *d;
	
	c = &a;
	d = &b;
	ft_swap(c, d);

	if (b == 10 && a == 15)
	{
		printf("OK!");
	}
	else
	{
		printf("KO!");
	}

	return (0);
}