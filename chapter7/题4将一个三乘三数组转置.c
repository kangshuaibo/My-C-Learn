#include<stdio.h>
#define N 3
int array[N][N];
int main()
{
  int n;
  void convert(int array[][N]);//声明
  //输入元素
  printf("请输入数组元素:");
  int i,j;
  for(i=0;i<N;i++)
  	 for(j=0;j<N;j++)
        scanf("%d",&array[i][j]);
  //输出原数组
    printf("您输入的数组为：\n");
  for(i=0;i<N;i++)
	 {
	 	for(j=0;j<N;j++)
		 printf("%d ",array[i][j]);
		printf("\n");
	 }
   printf("\n");
  //调用函数
    convert(array);
  //输出数组
    printf("转置后的数组为：\n");
    for(i=0;i<N;i++)
	 {
	 	for(j=0;j<N;j++)
		 printf("%d ",array[i][j]);
		printf("\n");
	 }
}
void convert(int array[][N])
{
 int t;
 int i,j;
 for(i=0;i<N;i++)
 	for(j=0;j<i;j++)//二维数组直接定义了两个数组 这个只有一个数组 要注意循环位置 不要再循环回来
 	{
 	t=array[i][j];
    array[i][j]=array[j][i];
    array[j][i]=t;
    }
}