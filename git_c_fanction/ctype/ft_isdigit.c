
int ft_isdigit(int c)
{
	if (c < 0 || c > 127)
		return (0);
	return (c >= '0' && c <= '9');
}

#include <stdio.h>
int main()
{
	int a = 'u';
	int b = 'I';
	int c = '1';
	int d = '#';

	printf("%d\n",ft_isdigit(a));
	printf("%d\n",ft_isdigit(b));
	printf("%d\n",ft_isdigit(c));
	printf("%d\n",ft_isdigit(d));
	return (0);
}