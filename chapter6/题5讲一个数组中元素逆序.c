//思路第一个与最后一个交换位置 前后循环
#include <stdio.h>
#define N 10
int main(int argc, char const *argv[])
{
	int a[N];
	//输入数组
	int i;
	printf("请输入数组:");
	for(i=0;i<N;i++)
		scanf("%d",&a[i]);
    
    printf("\n");
   //打印数组
    printf("原数组为:\n");
    for(i=0;i<N;i++)
    	printf("%d ",a[i]);

    printf("\n");
   //进行逆序
    int temp;
    for(i=0;i<N/2;i++)
    {
    	temp=a[i];
    	a[i]=a[N-i-1];
    	a[N-i-1]=temp;
    }
    //输出数组
    printf("逆序的数组为:\n");
    for(i=0;i<N;i++)
      printf("%d ",a[i]);

    printf("\n");
	
	return 0;
}