void ft_rev_int_tab(int *tab, int size)
{
	int i;
	int tmp;

	i = 0;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = tmp;
		i++;
	}
}

#include <stdio.h>
int main(void)
{
	int tab[6] = {1, 2, 3, 4, 5, 6};
	int i = 0;

	while (i < 6)
	{
		printf("%d ", tab[i]);
		i++;
	}

	ft_rev_int_tab(tab, 6);

	i = 0;
	while (i < 6)
	{
		printf("%d ", tab[i]);
		i++;
	}
}