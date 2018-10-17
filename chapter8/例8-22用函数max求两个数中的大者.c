#include <stdio.h>
int main()
{   int max(int ,int);//声明

	int (*p)(int,int);//指向函数的指针变量
	int a,b,c;

	p=max;//p为指向函数的指针变量 指向max

	printf("请输入a和b:");
	 scanf("%d%d",&a,&b);
	c=(*p)(a,b);  //调用函数

	printf("a=%d\nb=%d\nmax=%d\n",a,b,c );
	return 0;
}

int max(int x,int y)
{
  int z;
  if(x>y)
  	z=x;
  else
  	x=y;
  return z;
}