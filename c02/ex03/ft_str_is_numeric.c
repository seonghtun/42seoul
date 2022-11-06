int ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>

int main(void)
{
	char dest[30] = "vjidofjep   ";
	char *src = "asdffdqe1";

	printf("%d\n", ft_str_is_numeric(dest));
	printf("%d\n", ft_str_is_numeric(src));
	printf("%d\n", ft_str_is_numeric("1133"));
}