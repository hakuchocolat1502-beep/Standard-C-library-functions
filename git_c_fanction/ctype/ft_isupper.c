
int ft_isupper(int c)
{
	if (c < 0 || c > 127)
		return (0);
	return (c >= 'A' && c <= 'Z');
}

#include <stdio.h>
int main()
{
	int a = 'u';
	int b = 'I';
	int c = '1';
	int d = '#';

	printf("%d\n",ft_isupper(a));
	printf("%d\n",ft_isupper(b));
	printf("%d\n",ft_isupper(c));
	printf("%d\n",ft_isupper(d));
	return (0);
}