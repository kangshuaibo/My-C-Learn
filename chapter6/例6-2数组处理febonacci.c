#include <stdio.h>
int main(int argc, char const *argv[])
{
	int f[40]={1,1};
	int i;
	for(i=2;i<=40;i++)
		f[i]=f[i-2]+f[i-1];
	for(i=0;i<=40;i++)
	{
		if(i%5==0) printf("\n");//控制换行
		 printf("%10d",f[i] );
	}



	return 0;
}