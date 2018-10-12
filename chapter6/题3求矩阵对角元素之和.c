#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a[3][3];
	//输入数组元素
	int i,j;
	printf("请输入数组元素\n");
	for(i=0;i<=2;i++)
		for(j=0;j<=2;j++)
			scanf("%d",&a[i][j]);
	printf("\n");
	int sum=0;
	for(i=0;i<=2;i++)
		for(j=0;j<=2;j++){
			if(i==j)
			sum=sum+a[i][j];
		}
	printf("矩阵对角线之和为:%d\n",sum);


	return 0;
}