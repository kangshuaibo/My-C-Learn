#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a[10];
	int i;
	for(i=0;i<10;i++)
		a[i]=i;
	for(i=9;i>=0;i--)
		printf("%d ",a[i] );
	return 0;
}