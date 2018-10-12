#include <stdio.h>
int main(int argc, char const *argv[])
{    int a[10];
	printf("请输入十个数\n");
	int i;
	for(i=0;i<=9;i++)
		scanf("%d",&a[i]);

	printf("\n");

    int j,temp;
	for(j=0;j<10;j++)//冒泡排序从此开始
		for(i=0;i<10-j;i++)
			if(a[i]>=a[i+1])
				{
				 temp=a[i];
			     a[i]=a[i+1];
			     a[i+1]=temp;
  				}

  	printf("有小到大排序为\n");//循环输出数组中的值
  	for(i=0;i<10;i++)
  		printf("%d ",a[i] );
  	
  	printf("1\n");
	return 0;
}