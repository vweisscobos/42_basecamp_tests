#include <stdio.h>

int ft_strcmp(char *s1, char *s2);

int main(void)
{
	if (
		ft_strcmp("algo", "algo") == 0
		&& ft_strcmp("algo", "algn") > 0
		&& ft_strcmp("algo", "algp") < 0
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