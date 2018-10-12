//选择排序
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a[11];
	//逐个输入数组元素
	int i;
	for(i=1;i<=10;i++)
	{
	  printf("a[%d]=",i);
	  scanf("%d",&a[i]);
    }
    printf("\n");
    //输出原数组
    printf("原来的数组为:");
    for(i=1;i<=10;i++)
    	printf("%d ",a[i] );
    printf("\n");
    //排序开始
    int j,temp,min;
    for(i=1;i<=10;i++)//把第一个数定义为最小 
     {
     	min=i;
    	for(j=i+1;j<=10;j++)//从第一个的后面逐个选择一个比他小的
    	{
    		if(a[min]>a[j]) min=j;//把这个定义为最小，与之间的最小交换
    		temp=a[i];
    		a[i]=a[min];
    		a[min]=temp;
    	}
    }
    //输出
    printf("排序后数组为:");
    for(i=1;i<=10;i++)
    printf("%d ",a[i]);
printf("\n");

	return 0;
}