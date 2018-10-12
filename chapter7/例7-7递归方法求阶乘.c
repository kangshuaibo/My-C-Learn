#include <stdio.h>
int main(int argc, char const *argv[])
{
	int fac(int n);//声明
	int n;
	int y;
	printf("请输入几阶：");
	scanf("%d",&n);
	//函数调用
	y=fac(n);
	printf("n的阶乘为%d\n",y);

	return 0;
}

int fac(int n)
{
  int c;
  if(n<0)
  	printf("输入非法\n");
  else 
  	if (n==0||n==1)
  	{
  		c=1;
  	}
  	else
  		c=fac(n-1)*n;

  	return c;

}