#include <unistd.h>

int main(int argc, char **argv)
{
	int b;
	char ans;
	(void)argc;
	b = argv[1][0] - '0';
	ans = b + '0';
	write(1, &ans, 1);
	return(0);
}
