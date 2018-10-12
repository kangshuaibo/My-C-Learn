//直接打印杨辉三角形
#include <stdio.h>
#define N 10
int main(int argc, char const *argv[])
{
	int a[N][N];
	int i,j;
	for(i=0;i<N;i++)
	{
		a[i][0]=1;//第一列置1
		a[i][i]=1;//对角线置1

	}
	for(i=2;i<N;i++)//从第三行开始
		for(j=1;j<N;j++)
		{
			a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
	for(i=0;i<N;i++){
		for(j=0;j<=i;j++){
			printf("%5d",a[i][j]);
		}
             printf("\n");
	}
    printf("\n");

	return 0;
}