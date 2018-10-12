#include <stdio.h>
int main(int argc, char const *argv[])
{
	int i,sum;
	while(i<=100)
	{
		sum=i+sum;
		i++;
	}
	printf("%d\n",sum );
	return 0;
}