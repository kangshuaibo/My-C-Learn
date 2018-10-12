#include <stdio.h>
int main(int argc, char const *argv[])
{
	char a[]={'*','*','*','*','*'};
	char space=' ';
	int i,j,k;
	for(i=0;i<5;i++)
	{
		printf("\n");
		for(j=1;j<=i;j++)//每循环一行输出一个空格 j<=i
			printf("%c",space);
		for(k=0;k<5;k++)
			printf("%c ",a[k]);
	}
	printf("\n");
	


	return 0;
}