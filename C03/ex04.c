#include <stdio.h>
#include <bsd/string.h>

char	*ft_strstr(char *str, char *to_find);

int main(void)
{
	char str[] = "alguma coisa";
	char to_find_1[] = "coi";
	char to_find_2[] = "coisaaaaa";

	printf("%s\n", strstr(str, ""));
	printf("%s\n", ft_strstr(str, ""));

	printf("Teste 1:\n");
	printf("Haystack: %s\n", str);
	printf("Needle: %s\n", to_find_1);
	printf("Expected:\n");
	printf("%s\n", ft_strstr(str, to_find_1));
	printf("Output:\n");
	printf("%s\n", strstr(str, to_find_1));
	printf("\n");
	printf("Teste 2:\n");
	printf("Haystack: %s\n", str);
	printf("Needle: %s\n", to_find_2);
	printf("Expected:\n");
	printf("%s\n", ft_strstr(str, to_find_2));
	printf("Output:\n");
	printf("%s\n", strstr(str, to_find_2));
	printf("\n");
	printf("Teste 3:\n");
	printf("Haystack: %s\n", str);
	printf("Needle: \"\"\n");
	printf("Expected:\n");
	printf("%s\n", strstr(str, ""));
	printf("Output:\n");
	printf("%s\n", ft_strstr(str, ""));
}