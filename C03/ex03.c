#include <stdio.h>
#include <bsd/string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int main(void)
{
	char str[7];
	char str1[100];
	char str2[] = "defghijk";

	strcpy(str, "abc");
	strcpy(str1, "abc");

	strncat(str, str2, 3);
	ft_strncat(str1, str2, 3);

	printf("%s\n", str);
	printf("%s\n", str1);

	return (0);
}