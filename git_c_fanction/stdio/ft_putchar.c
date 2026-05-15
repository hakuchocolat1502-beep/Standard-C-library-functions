#include <unistd.h>
int ft_putchar(int c)
{
	write(1, &c, 1);
	write(1, "\n", 1);
	return(0);
}

#include <stdio.h>
int main()
{
	int a = '2';
	ft_putchar(a);
	putchar(a);
	return(0);
}