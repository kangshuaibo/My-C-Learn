#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
	int n;
	int prime(int n);//声明
	//输入要判断的数
	printf("请输入一个数：");
	scanf("%d",&n);
    //调用函数判断
    if(prime(n))
    	printf("是素数\n");
    else
    	printf("不是素数\n");
	return 0;
}

int prime(int n)
{
	int flag=1;
	int i;
	for(i=2;i<=sqrt(n);i++)
      if(n%i==0)
      	flag=0;
      return flag;
}
