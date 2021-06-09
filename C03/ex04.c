#include <stdio.h>

char	*ft_strstr(char *dest, char *src);

int main(void)
{
	char str[] = "alguma coisa";
	char to_find[] = "coisa";
	char *c;

	c = ft_strstr(str, to_find);
	printf("%c", *(c + 1));
}