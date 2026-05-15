#include <stdlib.h>
int ft_strlen(char *s);

char *ft_strcat(char *s, char *t)
{
	char *ans = malloc(ft_strlen(s) + ft_strlen(t) + 1);
	int num = ft_strlen(s);
	int a = 0;
	while (s[a] != '\0')
	{
		ans[a] = s[a];
		a++;
	}
	a = 0;
	while (t[a] != '\0')
	{
		ans[num + a] = t[a];
		a++;
	}
	ans[num + a] = '\0';
	return(ans);
}

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
	char a[] = "hello";
	char *b = "world";
	printf("a: %s, b: %s\n",a,b);
	printf("%s\n",ft_strcat(a,b));
	printf("%s\n",strcat(a,b));
	return(0);
}