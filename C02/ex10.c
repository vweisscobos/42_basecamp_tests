#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main(void)
{
	char dest[4];
	char src[] = "coisaqualquer";
	int size;

	size = ft_strlcpy(dest, src, sizeof(dest));
	
	if (
		size == 13
		&& dest[0] = 'c'
		&& dest[1] = 'o'
		&& dest[2] = 'i'
		&& dest[3] = 's'
	)
	{
		printf("OK!");
	}
	else
	{
		printf("KO!");
	}
}
