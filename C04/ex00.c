#include <stdio.h>

int ft_strlen(char *str);

int main(void)
{
	char str1[] = "";
	char str2[] = "alguma";

	if (ft_strlen(str1) == 0 && ft_strlen(str2) == 6)
	{
		printf("OK!");
	}
	else
	{
		printf("KO!");
	}
	return (0);
}
