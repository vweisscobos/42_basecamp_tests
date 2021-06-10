#include <stdio.h>
#include <bsd/string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
	char a[] = "abc";
	char b[] = "abcaaaa";
	char c[] = { 'a', -10, 'b' };

	printf("Testing if\n");
	printf("a == a\n");
	printf("abcaaaa > abc\n");
	printf("ab == ab \n");
	printf("abcaa == abcaa \n");

	if (
		(strncmp(a, b, 1) == ft_strncmp(a, b, 1))
		&& (strncmp(b, a, 4) == ft_strncmp(b, a, 4))
		&& (strncmp(a, a, 2) == ft_strncmp(a, a, 2))
		&& (strncmp(b, b, 5) == ft_strncmp(b, b, 5))
		&& (strncmp(a, c, 5) == ft_strncmp(a, c, 5))
		&& (strncmp(a, a, 0) == ft_strncmp(a, a, 0))
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