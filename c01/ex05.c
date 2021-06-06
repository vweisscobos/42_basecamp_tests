#include <stdio.h>

void ft_putstr(char *str);

int main(void)
{
	char str[] = "Texto qualquer";
	
	printf("Expected:\nTexto qualquer\n");
	printf("Output:\n");
	ft_putstr(str);
	return (0);
}