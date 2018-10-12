#include <stdio.h>
int main(int argc, char const *argv[])
{
	char c[15]={'I',' ','a','m',' ','a','\0','g'};
	int i;
	for(i=0;i<=15;i++)
		printf("%c",c[i] );
	printf("\n");

	return 0;
}