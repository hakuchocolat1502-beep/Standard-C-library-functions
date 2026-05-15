#include <unistd.h>

int ft_fabs(int x)
{
	int ans;
	if(x<0)
		ans = -x;
	else
		ans = x;
	return(ans);
}

#include <stdio.h>
int main()
{
	int q = 9;
	printf("%d\n",ft_fabs(q));
	q = -9;
	printf("%d\n",ft_fabs(q));
	return(0);
}