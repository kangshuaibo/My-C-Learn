//有两个整数a和b,由用户输入1 2 3输入1求ab中的大者 输入2求ab中小者 输入3求ab之和
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int fun(int x,int y,int(*p)(int,int));//声明
	int max(int,int);
	int min(int,int);
	int add(int,int);

	int a=34,b=-21,n;

	printf("有两个个整数34 -21 请选择1、求最大 2、求最小 3、求和\n");
	 scanf("%d",&n);

	if(n==1) 
		fun(a,b,max);
	else if(n==2) 
		fun(a,b,min);
	else if(n==3) 
		fun(a,b,add);

	return 0;
}

int fun(int x,int y,int(*p)(int,int) )
{
	int result;
	result=(*p)(x,y);
	printf("%d\n",result );
	return result;
}

int min(int x,int y)
{
	int z;
	z=x<y?x:y;
	return z;
}

int max(int x,int y)
{
	int z;
	z=x>y?x:y;
	return z;
}

int add(int x,int y)
{
	return x+y;
}