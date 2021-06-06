#include <stdio.h>

void	ft_ft(int *nbr);

int main(void)
{
	int a;
	int *b;

	b = &a;

	ft_ft(b);
	if (a == 42)
	{
		printf("OK!");
	}
	else 
	{
		printf("KO!");
	}
	
}