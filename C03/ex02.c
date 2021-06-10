#include <stdio.h>
#include <bsd/string.h>

char	*ft_strcat(char *dest, char *src);

int main(void)
{
	char src[50];
	char src1[50];
	char src2[] = "defghijklm";

	strcpy(src, "abc");
	strcpy(src1, "abc");

	printf("Expected:\n");
	printf("%s\n", ft_strcat(src, src2));
	printf("Output:\n");
	printf("%s\n", strcat(src1, src2));

	if (
		strcmp(src, src1) == 0
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