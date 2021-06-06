#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
		char a[5];
	char b[5];

	a[0] = 't';
	a[1] = 'e';
	a[2] = 's';
	a[3] = 't';
	a[4] = 'e';
	
	ft_strncpy(b, a, 3);
	
	if (
		b[0] == 't' &&
		b[1] == 'e' &&
		b[2] == 's'
	)
	{
		printf("OK!");
	}
	else
	{
		printf("KO!");
	}
}