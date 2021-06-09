#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int main(void)
{
	char dest[6];
	char src[] = "def";

	dest[0] = 'a';
	dest[1] = 'b';
	dest[2] = 'c';

	ft_strcat(dest, src);

	if (
		dest[0] == 'a'
		&& dest[1] == 'b'
		&& dest[2] == 'c'
		&& dest[3] == 'd'
		&& dest[4] == 'e'
		&& dest[5] == 'f'
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