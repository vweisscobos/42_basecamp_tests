#include <stdio.h>

int ft_str_is_numeric(char *str);

int main(void)
{
	char str[] = "12345";
	char str2[] = "11243a";

	if (ft_str_is_numeric(str) == 1 && ft_str_is_numeric(str2) == 0)
	{
		printf("OK!");
	}
	else
	{
		printf("KO!");
	}
}