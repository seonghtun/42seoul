unsigned int ft_strlcpy(char *dest, char *str, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (str[i])
	{
		if (i < size - 1)
			dest[i] = str[i];
		else
			dest[i] = '\0';
		i++;
	}
	if (size > i)
		dest[i] = '\0';
	return (i);
}

#include <stdio.h>

int main(void)
{
	char dest[30] = "vjidofjep";
	char *src = "asdff";

	printf("%d\n", ft_strlcpy(dest, src, 4));
	printf("%s", dest);
}