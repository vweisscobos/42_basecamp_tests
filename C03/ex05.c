#include <stdio.h>
#include <bsd/string.h>

char	*ft_strlcat(char *dest, char *src, unsigned int size);

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

	strlcat(str, str4, sizeof(str));
	ft_strlcat(str1, str4, sizeof(str1));

	printf("Expected:\n");
	printf("%s\n", str);
	printf("Ouput:\n");
	printf("%s\n", str1);
	printf("\n");
	printf("Test2:\n");
	printf("dest: %s\n", str2);
	printf("src: %s\n", str4);
	printf("n: %d\n", 40);

	strlcat(str2, str4, sizeof(str2));
	ft_strlcat(str3, str4, sizeof(str3));

	printf("Expected:\n");
	printf("%s\n", str2);
	printf("Ouput:\n");
	printf("%s\n", str3);

	return (0);
}