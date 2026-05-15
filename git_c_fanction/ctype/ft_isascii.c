
int ft_isascii(int c)
{
	if (c < 0 || c > 127)
		return (0);
	return (1);
}

#include <stdio.h>
int main()
{
	int a = 'u';
	int b = 'I';
	int c = '1';
	int d = '#';

	printf("%d\n",ft_isascii(a));
	printf("%d\n",ft_isascii(b));
	printf("%d\n",ft_isascii(c));
	printf("%d\n",ft_isascii(d));
}