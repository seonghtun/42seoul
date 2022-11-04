#include <unistd.h>

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void ft_print_comb2(void)
{
	char arr[6];

	arr[0] = '0';
	arr[1] = '0';
	arr[2] = ' ';
	arr[5] = '\0';
	while (arr[0] <= '9')
	{
		if (arr[1] > '9')
		{
			arr[0]++;
			arr[1] = '0';
			continue;
		}
		arr[3] = arr[0];
		arr[4] = arr[1] + 1;
		while (arr[3] <= '9')
		{
			if (arr[4] > '9')
			{
				arr[3]++;
				arr[4] = '0';
				continue;
			}
			if (arr[3] != '0' || arr[4] != '1')
				write(1, ", ", 2);
			ft_putstr(arr);
			arr[4]++;
		}
		arr[1]++;
	}
}

int main(void)
{
	ft_print_comb2();
}