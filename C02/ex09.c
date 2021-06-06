#include <stdio.h>

char *ft_strcapitalize(char *str);

int main(void)
{
	char str1[] = "oi, tudo bem?";
	char str2[] = "42palavras quarenTa-e-duas";

	ft_strcapitalize(str1);
	ft_strcapitalize(str2);

	if (
		str1[0] == 'O'
		&& str1[1] == 'i'
		&& str1[2] == ','
		&& str1[3] == ' '
		&& str1[4] == 'T'
		&& str1[5] == 'u'
		&& str1[6] == 'd'
		&& str1[7] == 'o'
		&& str1[8] == ' '
		&& str1[9] == 'B'
		&& str1[10] == 'e'
		&& str1[11] == 'm'
		&& str2[0] == '4'
		&& str2[11] == 'Q'
		&& str2[12] == 'u'
		&& str2[17] == 't'
		&& str2[20] == 'E'
		&& str2[22] == 'D'
	)
	{
		printf("OK!");
	}
	else
	{
		printf("KO!");
	}
}