void ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int min;
	int tmp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		min = i;
		while (j < size)
		{
			if (tab[min] > tab[j])
				min = j;
			j++;
		}
		if (i != min)
		{
			tmp = tab[i];
			tab[i] = tab[min];
			tab[min] = tmp;
		}
		i++;
	}
}

#include <stdio.h>
int main(void)
{
	int tab[6] = {6, 5, 4, 3, 2, 1};
	int i = 0;

	while (i < 6)
	{
		printf("%d ", tab[i]);
		i++;
	}

	ft_sort_int_tab(tab, 6);
	printf("\n");
	i = 0;
	while (i < 6)
	{
		printf("%d ", tab[i]);
		i++;
	}
}