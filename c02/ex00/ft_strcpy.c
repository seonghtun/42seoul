char *ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>

int main(void)
{
	char dest[30] = {
		0,
	};
	char *src = "asdff";

	printf("%s", ft_strcpy(dest, src));
}