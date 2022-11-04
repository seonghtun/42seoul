#include <unistd.h>

void ft_print_comb(void)
{
	char h;
	char t;
	char d;

	h = '0';
	while (h <= '9')
	{
		t = h + 1;
		while (t <= '9')
		{
			d = t + 1;
			while (d <= '9')
			{
				write(1, &h, 1);
				write(1, &t, 1);
				write(1, &d, 1);
				if (h != '7' || t != '8' || d != '9')
					write(1, ", ", 2);
				d++;
			}
			t++;
		}
		h++;
	}
}

int main(void)
{
	ft_print_comb();
}