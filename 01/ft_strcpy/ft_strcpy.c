char    *ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
 	}
	s1[i] = '\0';
	return (s1);
}

// #include <stdio.h>
// int main()
// {
// 	char *src = "hey there";
// 	char dst[20];

// 	char *res = ft_strcpy(dst, src);
// 	printf("%s", res);
// }