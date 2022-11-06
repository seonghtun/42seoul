#include <unistd.h>

void ft_non_printable_to_hex(unsigned char c)
{
	char arr[3];
	int num;

	num = c;
	if (num / 16 > 9)
		arr[0] = (num / 16) + 'a' - 10;
	else
		arr[0] = num / 16 + '0';
	if (num % 16 > 9)
		arr[1] = (num % 16) + 'a' - 10;
	else
		arr[1] = num % 16 + '0';

	write(1, "\\", 1);
	write(1, &arr[0], 1);
	write(1, &arr[1], 1);
}

void ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] < ' ' || str[i] == 127)
			ft_non_printable_to_hex(str[i]);
		else
			write(1, &str[i], 1);
		i++;
	}
}

int main(void)
{
	char str[30] = "Coucou\ntu vas bien ?";
	char arr[7] = {1, -21, 36, 244, 14, 127, 0};
	ft_putstr_non_printable(str);
	write(1, "\n", 1);
	ft_putstr_non_printable(arr);
}