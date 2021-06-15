#include <stdio.h>

int		ft_atoi(char *str);

int main(void)
{
	char *c;

	c = "1234";
	printf("str:\n%s\n", c);
	printf("Expected:\n1234\n");
	printf("Output:\n");
	printf("%d", ft_atoi(c));
	printf("\n");
	c = "    1234";
	printf("str:\n%s\n", c);
	printf("Expected:\n1234\n");
	printf("Output:\n");
	printf("%d", ft_atoi(c));
	printf("\n");
	c = "    ++++1234";
	printf("str:\n%s\n", c);
	printf("Expected:\n1234\n");
	printf("Output:\n");
	printf("%d", ft_atoi(c));
	printf("\n");
	c = "    ++++1234aaaa";
	printf("str:\n%s\n", c);
	printf("Expected:\n1234\n");
	printf("Output:\n");
	printf("%d", ft_atoi(c));
	printf("\n");
	c = "    ++++12aaa34aaaa";
	printf("str:\n%s\n", c);
	printf("Expected:\n12\n");
	printf("Output:\n");
	printf("%d", ft_atoi(c));
	printf("\n");
	c = "    ---12aaa34aaaa";
	printf("str:\n%s\n", c);
	printf("Expected:\n-12\n");
	printf("Output:\n");
	printf("%d", ft_atoi(c));
	printf("\n");
	c = "    ---12+-aaaa";
	printf("str:\n%s\n", c);
	printf("Expected:\n-12\n");
	printf("Output:\n");
	printf("%d", ft_atoi(c));
	printf("\n");
	c = "    ---12  334";
	printf("str:\n%s\n", c);
	printf("Expected:\n-12\n");
	printf("Output:\n");
	printf("%d", ft_atoi(c));
	printf("\n");
	return (0);
}
