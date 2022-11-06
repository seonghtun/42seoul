int ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			if (str[i] < 'A' || str[i] > 'Z')
				return (0);
		}
		i++;
	}
	return (1);
}

#include <stdio.h>

int main(void)
{
	char dest[30] = "vjidofjep   ";
	char *src = "asdffdqe1";

	printf("%d\n", ft_str_is_alpha(dest));
	printf("%d\n", ft_str_is_alpha(src));
	printf("%d\n", ft_str_is_alpha("Aasdfw"));
}