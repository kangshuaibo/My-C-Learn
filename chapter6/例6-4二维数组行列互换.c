#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a[2][3]={{1,2,3},{4,5,6}};
	int b[3][2];
    //处理a数组
	printf("数组a为\n");
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",a[i][j] );
			b[j][i]=a[i][j];//转置
		}
	printf("\n");
	}
    //处理b数组
	printf("b数组为\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",b[i][j]);
		}
	printf("\n");
    }





	return 0;
}