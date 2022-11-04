#include <unistd.h>

void recursive_func(char *arr, int n, int index, int num)
{
	if (index == n)
	{
		write(1, arr, n);
		if (10 != n + arr[0] - '0')
			write(1, ", ", 2);
		return;
	}
	while (num <= 9)
	{
		arr[index] = num + '0';
		recursive_func(arr, n, index + 1, num + 1);
		num++;
	}
}
void ft_print_combn(int n)
{
	char arr[10];

	recursive_func(arr, n, 0, 0);
}

int main(void)
{
	ft_print_combn(3);
	write(1, "\n", 1);
	ft_print_combn(5);
	write(1, "\n", 1);
	ft_print_combn(9);
	write(1, "\n", 1);
	ft_print_combn(1);
	write(1, "\n", 1);
}