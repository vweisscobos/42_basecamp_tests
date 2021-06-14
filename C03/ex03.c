#include <stdio.h>
#include <bsd/string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int main(void)
{
	char str[50];
	char str1[50];
	char str2[50];
	char str3[50];
	char str4[] = "defghijk";

	strcpy(str, "abc");
	strcpy(str1, "abc");

	strcpy(str2, "abc");
	strcpy(str3, "abc");

	printf("Test1:\n");
	printf("dest: %s\n", str);
	printf("src: %s\n", str4);
	printf("n: %d\n", 0);

	strncat(str, str4, 0);
	ft_strncat(str1, str4, 0);

	printf("Expected:\n");
	printf("%s\n", str);
	printf("Ouput:\n");
	printf("%s\n", str1);
	printf("\n");
	printf("Test2:\n");
	printf("dest: %s\n", str2);
	printf("src: %s\n", str4);
	printf("n: %d\n", 40);

	strncat(str2, str4, 10);
	ft_strncat(str3, str4, 10);

	printf("Expected:\n");
	printf("%s\n", str2);
	printf("Ouput:\n");
	printf("%s\n", str3);

	return (0);
}