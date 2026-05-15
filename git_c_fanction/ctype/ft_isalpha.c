
int ft_isalpha(int c)
{
	if (c < 0 || c > 127)
		return (0);
	return ((c >= 'A' && c <= 'Z') ||
			(c >= 'a' && c <= 'z'));
}

#include <stdio.h>
int main ()
{
	int a = 'u';
	int b = 'I';
	int c = '1';
	int d = '#';

	printf("%d\n",ft_isalpha(a));
	printf("%d\n",ft_isalpha(b));
	printf("%d\n",ft_isalpha(c));
	printf("%d\n",ft_isalpha(d));
	return (0);
}
