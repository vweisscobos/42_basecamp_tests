#include <stdio.h>
#include <bsd/string.h>

int ft_strcmp(char *s1, char *s2);

int main(void)
{
	char a[] = "abc";
	char b[] = "abcaaaa";

	if (
		(strcmp(a, b) == ft_strcmp(a, b))
		&& (strcmp(b, a) == ft_strcmp(b, a))
		&& (strcmp(a, a) == ft_strcmp(a, a))
		&& (strcmp(b, b) == ft_strcmp(b, b))
	)
	{
		printf("OK!");
	}
	else
	{
		printf("KO!");
	}
	return (0);
}