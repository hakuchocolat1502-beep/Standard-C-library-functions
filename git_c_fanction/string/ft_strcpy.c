char *ft_strcpy(char *s, char *t)
{
	int count;
	count = 0;
	while (t[count] != '\0')
	{
		s[count] = t[count];
		count++;
	}
	s[count] = '\0';
	return(s);
}

#include <stdio.h>
#include <string.h>
int main()
{
	char s[] = "aaaaaaaaaaa";
	char *t = "helloworld";
	char *answer;
	printf("s: %s, t: %s\n",s,t);
	answer = ft_strcpy(s,t);
	printf("s: %s, t: %s\n",answer,t);
	answer = strcpy(s,t);
	printf("s: %s, t: %s\n",answer,t);
	return(0);
}