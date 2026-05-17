#include <unistd.h>
int num(char *word);

char word (int val, char**word)
{
	int count;
	int character;
	char *output;

	count=1;
	if (val==2)
		return(0);
	while (count<val)
	{
		output=word[count];
		character=num(output);
		write(1,output,character);
		write(1," ",1);
		count=count+1;
	}
	return(1);
}

int num(char *word)
{
	int num;
	num = 0;
	while (word[num] != '\0')
		num++;
	return(num);
}
	
int main(int argc, char **argv)
{
	word(argc,argv);
	return(0);
}