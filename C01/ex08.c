#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int main(void)
{
	int tab[4];

	tab[0] = 4;
	tab[1] = 1;
	tab[2] = 8;
	tab[3] = 2;

	ft_sort_int_tab(tab, 4);

	if (tab[0] == 1 && tab[1] == 2 && tab[2] == 4 && tab[3] == 8)
	{
		printf("OK!");
	}
	else
	{
		printf("KO!");
	}

	return (0);
}