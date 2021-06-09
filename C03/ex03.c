#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int main(void)
{
	char dest[6];
	char src[] = "def";

	dest[0] = 'a';
	dest[1] = 'b';
	dest[2] = 'c';

	ft_strncat(dest, src, 2);

	if (
		dest[0] == 'a'
		&& dest[1] == 'b'
		&& dest[2] == 'c'
		&& dest[3] == 'd'
		&& dest[4] == 'e'
		&& dest[5] == '\0'
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