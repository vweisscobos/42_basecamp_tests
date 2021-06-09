#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
	if (
		ft_strncmp("algo", "alga", 3) == 0
		&& ft_strncmp("algo", "alfo", 3) > 0
		&& ft_strncmp("algo", "alho", 3) < 0
		&& ft_strncmp("algo", "algo", 5) == 0
		&& ft_strncmp("algo", "algn", 5) > 0
		&& ft_strncmp("algo", "algp", 5) < 0
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