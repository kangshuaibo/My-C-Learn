#include <stdio.h>
int main(int argc, char const *argv[])
{
	int f(int);//声明
	int a=2;//自动局部变量
	int i;
	for(i=0;i<3;i++)
		printf("%d\n",f(a));
	return 0;
}
int f(int a)
{
	auto int b=0;//自动局部变量
	static int c=3;  //静态局部变量 
	b=b+1;
	c=c+1;
	return(a+b+c);
}