#include <stdio.h>

int ft_str_is_alpha(char *str);

int main(void)
{
	// char str[] = "teste";
	// char str2[] = "ABXZ-";

	if (ft_str_is_alpha("") == 1 && ft_str_is_alpha("a1") == 0)
	{
		printf("OK!");
	}
	else
	{
		printf("KO!");
	}
}