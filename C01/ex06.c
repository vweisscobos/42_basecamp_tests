#include <stdio.h>

int ft_strlen(char *str);

int main(void)
{
	char str[] = "bla";

	if (ft_strlen(str) == 3)
	{
		printf("OK!");
	}
	else
	{
		printf("KO!");
	}
	return (0);
}
