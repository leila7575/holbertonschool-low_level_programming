#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string whose words are being capitalized
 * Return: string str with capital words
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		while (!(str[i] >= 'a' && str[i] <= 'z'))
			i++;
		if (str[i - 1] == ' ' ||
				str[i - 1] == ',' ||
				str[i - 1] == ';' ||
				str[i - 1] == '.' ||
				str[i - 1] == '!' ||
				str[i - 1] == '?' ||
				str[i - 1] == '"' ||
				str[i - 1] == '(' ||
				str[i - 1] == ')' ||
				str[i - 1] == '{' ||
				str[i - 1] == '}' ||
				str[i - 1] == '\n' ||
				str[i - 1] == '\t' ||
				i == 0)
			str[i] -= 32;
		i++;
	}

	return (str);
}
