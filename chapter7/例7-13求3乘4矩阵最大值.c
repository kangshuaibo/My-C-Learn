#include <stdio.h>
int main(int argc, char const *argv[])
{
	int max_value(int a[][4]);
	int a[3][4]={{1,3,5,7},{2,4,6,8},{15,17,34,12}};
	printf("最大值为%d",max_value(a));
	printf("\n");


	return 0;
}
int max_value(int a[][4])
{
	int max;//存放最大值 用于比较
	max=a[0][0];//假设第一个最大
	int i,j;
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
			if(a[i][j]>max)
				max=a[i][j];
	return max;
}