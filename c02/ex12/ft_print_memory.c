#include <unistd.h>
#include <stdio.h>

void print_memory(long long addr_num)
{
	int i;
	char str_addr[17];

	i = 15;
	while (i >= 0)
	{
		str_addr[i] = addr_num % 16 + '0';
		if (str_addr[i] > '9')
			str_addr[i] += ('a' - 10 - '0');
		addr_num /= 16;
		i--;
	}
	write(1, str_addr, 16);
}

void print_char_to_hex(int char_num)
{
	char c[3];

	if (char_num / 16 > 9)
		c[0] = (char_num / 16) - 10 + 'a';
	else
		c[0] = (char_num / 16) + '0';
	if (char_num % 16 > 9)
		c[1] = (char_num % 16) - 10 + 'a';
	else
		c[1] = (char_num % 16) + '0';
	write(1, c, 2);
}

void print_str_to_form(char *str)
{
	int i;
	char c[3];

	i = 0;
	while (str[i] && i < 16)
	{
		if (str[i] < 32 || str[i] == 127)
			print_char_to_hex(str[i]);
		else
			print_char_to_hex(str[i]);
		if (i % 2 == 1)
			write(1, " ", 1);
		i++;
	}
	while (i < 16)
	{
		write(1, "  ", 2);
		if (i % 2 == 1)
			write(1, " ", 1);
		i++;
	}
}

void ft_print_str(char *str)
{
	int i;

	i = 0;
	while (str[i] && i < 16)
	{
		if (str[i] < 32 || str[i] == 127)
			write(1, ".", 1);
		else
			write(1, &str[i], 1);
		i++;
	}
}

void *ft_print_memory(void *addr, unsigned int size)
{
	int i;
	int j;
	int cnt;
	char *str;

	i = 0;
	j = 0;
	cnt = size / 16;
	str = (char *)addr;
	if (size % 16 != 0)
		cnt += 1;
	if (size == 0)
		return (addr);
	while (cnt > j)
	{
		print_memory((long long)&str[i]);
		write(1, ": ", 2);
		print_str_to_form(&str[i]);
		ft_print_str(&str[i]);
		write(1, "\n", 1);
		i += 16;
		j++;
	}
}

int main()
{
	printf("\n\n\n------ex12-------\n");
	char str12[] = "Bonjour les aminches\t\n\tc  est fou\ttout\tce qu on peut faire avec\t\n\tprint_memory\n\n\n\tlol.lol. \n";
	// char blank[] = "";
	ft_print_memory((void *)str12, sizeof(str12));
	//	printf("===END====\n\n공백이여야함 i\n");
	//	printf("\t\tblank_address : %p\n\n", blank);
	//	ft_print_memory(blank, 0);
	//	printf("======blank======");
}