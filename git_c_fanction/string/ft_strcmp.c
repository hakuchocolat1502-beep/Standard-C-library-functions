int ft_strcmp(char *s, char *t)
{
	int ans;
	int b = 0;
	while (s[b] != '\0' || t[b] != '\0')
	{
		ans = s[b] - t[b];
		if (ans < 0)
			return(-1);
		if (ans > 0)
			return(1);
		b++;
	}
	return(ans);
}

#include <stdio.h>
#include <string.h>
int main()
{
	char *a = "abcdef";
	char *b = "abggdf";
	printf("a: %s, b: %s\n", a, b);
	printf("%d\n",ft_strcmp(a,b));
	printf("%d\n",strcmp(a,b));
	return(0);
}