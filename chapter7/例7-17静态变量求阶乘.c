//输出1-5的阶乘值
#include <stdio.h>
int main()
{
	int fac(int n);//声明
	int i;
	for(i=1;i<=5;i++)
	 printf("%d!=%d\n",i,fac(i));
   return 0;
}

int fac(int n)
{
	static int f=1;
	f=f*n;//静态局部变量 保留上次调用后的初值
	return f;
}
