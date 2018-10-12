#include <stdio.h>
int main()
{
	float a,b;
	float add(float,float);//声明
	printf("请输入要求和的两个数：");
	scanf("%f%f",&a,&b);
	//调用函数
	float c;
	c=add(a,b);
	printf("%f\n",c );

}

float add(float a,float b)
{
	int z;
	z=a+b;
	return z;

}