#include <stdio.h>

int ft_fibonacci(int index);

int main(void)
{
	int i;

	i = 0;
	while (i < 15)
	{
		printf("%d ,", ft_fibonacci(i));
		i++;
	}
	printf("\n");
	return (0);
}