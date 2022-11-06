int ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] < ' ' || str[i] >= 127)
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_str_is_printable("dfasercc"));
	printf("%d\n", ft_str_is_printable("  dfa\vsercc"));
	printf("%d\n", ft_str_is_printable("dfas\nercc"));
	printf("%d\n", ft_str_is_printable(":dfase	rcc"));
}