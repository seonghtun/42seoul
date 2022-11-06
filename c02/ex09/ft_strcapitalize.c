char *ft_strcapitalize(char *str)
{
	int flag;
	int i;

	i = 0;
	flag = 1;
	while (str[i])
	{
		if (flag && (str[i] <= 'z' && str[i] >= 'a'))
		{
			str[i] = str[i] - 32;
			flag = 0;
		}
		else if (!flag && (str[i] <= 'Z' && str[i] >= 'A'))
			str[i] = str[i] + 32;
		else if (str[i] >= '0' && str[i] <= '9')
			flag = 0;
		else if (str[i] <= 'Z' && str[i] >= 'A')
			flag = 0;
		else if (str[i] <= 'z' && str[i] >= 'a')
			flag = 0;
		else
			flag = 1;
		i++;
	}
	return (str);
}

#include <stdio.h>

int main(void)
{
	char arr[70] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("%s\n", arr);
	printf("%s", ft_strcapitalize(arr));
}