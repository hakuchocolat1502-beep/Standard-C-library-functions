#include <unistd.h>
int ft_printf(char *word)
{
	int	count;
	
	count = 0;
	while (word[count] != '\0')
	{
		write(1, &word[count], 1);
		count++;
	}
	write(1, "\n", 1);
	return(0);
}

#include <stdio.h>
int main ()
{
	char *s = "hello world";
	ft_printf(s);
	printf("%s\n",s);
	return(0);
}