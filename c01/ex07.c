#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int main(void)
{
	int tab[4];

	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 3;
	tab[3] = 4;

	ft_rev_int_tab(tab, 4);

	if (tab[0] == 4 && tab[1] == 3 && tab[2] == 2 && tab[3] == 1)
	{
		printf("OK!");
	}
	else
	{
		printf("KO!");
	}
	return (0);
}