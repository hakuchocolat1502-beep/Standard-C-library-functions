int ft_abs(int i)
{
	if (i < 0)
	{
		i = -i;
		return(i);
	}
	return(i);
}

#include <math.h>
#include <stdio.h>
int main()
{
	int a = -102;
	int b = 205;
	printf("%d, ",ft_abs(a));
	printf("%d\n",abs(a));
	printf("%d, ",ft_abs(b));
	printf("%d\n",abs(b));
	return(0);
}