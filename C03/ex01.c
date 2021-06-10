#include <stdio.h>
#include <bsd/string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
	char a[] = "abc";
	char b[] = "abcaaaa";

	if (
		(strncmp(a, b, 1) == ft_strncmp(a, b, 1))
		&& (strncmp(b, a, 4) == ft_strncmp(b, a, 4))
		&& (strncmp(a, a, 2) == ft_strncmp(a, a, 2))
		&& (strncmp(b, b, 5) == ft_strncmp(b, b, 5))
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