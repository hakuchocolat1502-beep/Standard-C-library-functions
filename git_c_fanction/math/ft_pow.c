int ft_pow(double x, double y)
{
	int ans;
	int count;

	count = 2;
	for (ans = x; count<=y; count++)
		ans=ans*x;
	/*
	ans = x;
	while (count<=y)
		ans=ans*x;
		count++;
	*/
	return(ans);
}

int main()
{
	
}