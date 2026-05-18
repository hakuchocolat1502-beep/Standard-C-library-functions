#include <unistd.h>
int ft_strlen(char *s);

int ft_puts(char **word)
{
	char *output;
	int count;
	int character;

	count=0;
	while (word[count]!=NULL)
	{
		output = word[count];
		character=ft_strlen(output);
		write(1,output,character);
		write(1,"\n",1);
		count++;
	}
	return(0);
}

int ft_strlen(char *s)
{
	int num;
	num = 0;
	while (s[num] != '\0')
		num++;
	return(num);
}

int main ()
{
	char *a[4]={"enter","botton","senser",NULL};
	ft_puts(a);
	return(0);
}