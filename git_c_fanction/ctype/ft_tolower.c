
int ft_tolower(int c)
{
	if (c < 0 || c > 127)
		return (0);

	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}

#include <stdio.h>
int main()
{
	int a = 'u';
	int b = 'I';
	int c = '1';
	int d = '#';
	int *count[] = {&a, &b, &c, &d};
	int i = 0;

	printf("a:%c, b:%c, c:%c, d:%c\n",a,b,c,d);
	while (i < 4)
	{
		*count[i] = ft_tolower(*count[i]);
		i++;
	}
	printf("a:%c, b:%c, c:%c, d:%c\n",a,b,c,d);
	return (0);
}