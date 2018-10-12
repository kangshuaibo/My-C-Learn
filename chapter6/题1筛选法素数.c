//被挖去的置零
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a[101];
	int i;
	for(i=1;i<100;i++)
	{
		a[i]=i;
	}

	a[1]=0;//挖掉第一个被除数
	int j;
	for(i=2;i<100;i++)//被除数从第二个开始
		for(j=i+1;j<=101;j++)//筛选除数 是被除数的下一个
		{
			if(a[i]!=0&&a[j]!=0)
				if(a[j]%a[i]==0)//被除尽 挖去
					a[j]=0;
		}

		printf("\n");

	//int num=0;
	for(int i=2,num=0;i<=101;i++)//控制换行的num
	{
		if(a[i]!=0)
		{
			printf("%5d",a[i] );
			num++;
		}
		if(num==10)//这样控制换行不会产生空行
			{
			  printf("\n");
		      num=0;
         	}

	}
	printf("\n");




	return 0;
}