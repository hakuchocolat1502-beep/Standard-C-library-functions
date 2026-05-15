
int ft_toupper(int c)
{
	if (c < 0 || c > 127)
		return (0);

	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

#include <stdio.h>
int main()
{
	int a = 'u';
	int b = 'I';
	int c = '1';
	int d = '#';

	printf("a:%c, b:%c, c:%c, d:%c\n",a,b,c,d);
	a = ft_toupper(a);
	b = ft_toupper(b);
	c = ft_toupper(c);
	d = ft_toupper(d);
	printf("a:%c, b:%c, c:%c, d:%c\n",a,b,c,d);
	return (0);
}