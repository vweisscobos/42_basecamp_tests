#include <stdio.h>

int ft_str_is_uppercase(char *str);

int main(void)
{
	if (
		ft_str_is_uppercase("") == 1
		&& ft_str_is_uppercase("ABCDEF") == 1
		&& ft_str_is_uppercase("abcdEF") == 0
	)
	{
		printf("OK!");
	}
	else
	{
		printf("KO!");
	}
}