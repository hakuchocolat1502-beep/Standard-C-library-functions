int ft_fmod(double x,double y)
{
	int ans;
	int a;
	int b;
	a = x;
	b = y;
	ans = a%b;
	return(ans);
}

#include <stdio.h>
int main()
{
	int x; int y;
	x=7; y=2;
	printf("%d / %d\n",x,y);
	int ans =ft_fmod(x,y);
	printf("...%d\n",ans);
	return(0);
}