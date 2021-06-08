#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
	char a[5];
	char b[5];
	char c[7];

	a[0] = 't';
	a[1] = 'e';
	a[2] = 's';
	a[3] = 't';
	a[4] = 'e';
	
	ft_strncpy(b, a, 3);
	ft_strncpy(c, a, 7);
	
	if (
		b[0] == 't' &&
		b[1] == 'e' &&
		b[2] == 's' &&
		c[0] == 't' &&
		c[1] == 'e' &&
		c[2] == 's' &&
		c[3] == 't' &&
		c[4] == 'e' &&
		c[5] == '\0' &&
		c[6] == '\0'
	)
	{
		printf("OK!");
	}
	else
	{
		printf("KO!");
	}
}