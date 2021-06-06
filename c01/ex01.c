#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int main(void)
{
	int a;
	int *b;
	int **c;
	int ***d;
	int ****e;
	int *****f;
	int ******g;
	int *******h;
	int ********i;
	int *********j;

	b = &a;
	c = &b;
	d = &c;
	e = &d;
	f = &e;
	g = &f;
	h = &g;
	i = &h;
	j = &i;

	ft_ultimate_ft(j);
	if (a == 42)
	{
		printf("OK!");
	}
	else 
	{
		printf("KO!");
	}
	
}