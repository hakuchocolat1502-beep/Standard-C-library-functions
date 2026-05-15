int ft_strlen(char *s)
{
	int num;
	num = 0;
	while (s[num] != '\0')
		num++;
	return(num);
}

#include <stdio.h>
#include <string.h>
int main()
{
	char *s = "hello cat";
	printf("%d\n",ft_strlen(s));
	printf("%d\n",strlen(s));
}