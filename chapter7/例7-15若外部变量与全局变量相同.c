#include <stdio.h>
int a=3,b=5;//定义全局变量
int main(int argc, char const *argv[])
{
	int max(int a,int b);//声明
	int a=8;//此处局部变量屏蔽了全局变量
	printf("%d\n",max(a,b));

	return 0;
}
int max(int a,int b)//传递进来的参数也是
{
	int c;
	c=a>b?a:b;
	return c;
}