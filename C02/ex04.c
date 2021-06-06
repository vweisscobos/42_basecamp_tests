#include <stdio.h>

int ft_str_is_lowercase(char *str);

int main(void)
{
	char str[] = "abcdfe";
	char str2[] = "abcfDE";

	if (ft_str_is_lowercase(str) == 1 && ft_str_is_lowercase(str2) == 0)
	{
		printf("OK!");
	}
	else
	{
		printf("KO!");
	}
}