
int ft_islower(int c)
{
	if (c < 0 || c > 127)
		return (0);
	return (c >= 'a' && c <= 'z');
}

#include <stdio.h>
int main()
{
	int a = 'u';
	int b = 'I';
	int c = '1';
	int d = '#';

	printf("%d\n",ft_islower(a));
	printf("%d\n",ft_islower(b));
	printf("%d\n",ft_islower(c));
	printf("%d\n",ft_islower(d));
	return (0);
}