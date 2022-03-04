#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main()
{
	int i;

	i = 122;
	while (i >= 97)
	{
		if (i % 2 == 0)
			ft_putchar(i);
		else
			ft_putchar(i - 32);
		i--;
	}
	return (0);
}