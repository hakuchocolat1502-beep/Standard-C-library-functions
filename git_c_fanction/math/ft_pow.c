#include <stdio.h>

int ft_pow(double x, double y)
{
	int ans;
	int count;

	count = 0;
	ans = 1;
	while (count<y)
	{
		if (y==1)
			ans=x;
		if (y>=2)
		{
			ans=ans*x;
			count++;
		}
		else
			break;
	}

	return(ans);
}

int main()
{
	int x;
	int y;
	
	x=5; y=1;
	printf ("%d,%d\n",x,y);
	printf ("%d\n",ft_pow(x,y));

	return(0);
}