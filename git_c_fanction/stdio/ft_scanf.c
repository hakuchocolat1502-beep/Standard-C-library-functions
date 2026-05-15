#include <unistd.h>

int main (int argc, char *argv[])
{
	int a = 1;
	int b = 0;
	while (a <= argc)
	{
		while (argv[a][b] != '\0')
		{
			write(1, &argv[a][b], 1);
			b++;
		}
		b = 0;
		write(1, "\n", 1);
		a++;
	}
	return(0);
}