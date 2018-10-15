//输出方式比较 指向数组元素的指针
#include<stdio.h>
int main()
{
	int a[10];//a为数组名
	int i;
	int *p;//只有3用

	printf("请输入十个整数：");
	//case one
	/*
		for(i=0;i<10;i++)
		{
			scanf("%d",&a[i]);
		}
	*/
	//case two
	for(p=a;p<(a+10);p++)
	{
		scanf("%d",p);//地址变量表示当前元素的地址
	}







    //1、通过数组下标输出
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");


	//2、通过数组名计算数组元素地址
	for(i=0;i<10;i++)
	{
		printf("%d ",*(a+i) );
	}
	printf("\n");


	//3、用指针变量指向数组元素
	for(p=a;p<(a+10);p++)//p指向数组名 即p为数组首元素的地址 p=&a[0] p+1也就是a+1都是地址(a是地址常量不能改变 p为指针变量可改变)
	{
		printf("%d ",*p );//对于c来讲这种方式更快
	}
	printf("\n");

	return 0;
}