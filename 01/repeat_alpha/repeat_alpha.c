#include <unistd.h>
#include <stdio.h>

int	count(char c)
{
	int rep;

	if (c >= 'A' && c <= 'Z')
	rep = c - 'A' + 1;
	else if (c >= 'a' && c <= 'z')
	rep = c - 'a' + 1;
	else
		rep = 1;
	return (rep);
}

int	main(int argc, char *argv[])
{
	int repeat;
	if (argc == 2)
	{
		while (*argv[1])
		{
			repeat = count(*argv[1]);
			while (repeat)
			{
				repeat--;
				write (1, argv[1], 1);
			}
			argv[1]++;
		}
	}
	write(1, "\n", 1);
	return (0);
}