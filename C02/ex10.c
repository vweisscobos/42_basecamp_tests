#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main(void)
{
	char dest[4];
	char src[] = "bla";

	ft_strlcpy(dest, src, sizeof(src));

	if (
		dest[0] == 'b'
		&& dest[1] == 'l'
		&& dest[2] == 'a'
		&& dest[3] == '\0'
	)
	{
		printf("OK!");
	}
	else
	{
		printf("KO!");
	}
}
