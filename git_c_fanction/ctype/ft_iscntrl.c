
int ft_iscntrl(int c)
{
	if (c < 0 || c > 127)
		return (0);
	return ((c >= 0 && c <= 31) || (c == 127));
}

#include <stdio.h>
int main()
{
	int a = 'u';
	int b = 'I';
	int c = '1';
	int d = '\n';

	printf("%d\n",ft_iscntrl(a));
	printf("%d\n",ft_iscntrl(b));
	printf("%d\n",ft_iscntrl(c));
	printf("%d\n",ft_iscntrl(d));
	return (0);
}