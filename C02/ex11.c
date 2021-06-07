#include <stdio.h>

void ft_putstr_non_printable(char *str);

int main(void)
{
	char str[] = "Oi\nvoce esta bem?";

	printf("Expected:\nOi\\0avoce esta bem?\n");
	printf("Output:\n");
	ft_putstr_non_printable(str);
}
