//给出三角形三边求面积 用海伦公式
#include <stdio.h>
#include <math.h>

int main()
{
	double a,b,c,s,area;//注意定义为双精度
	a=3.67;
	b=5.63;
	c=6.21;
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("a=%f\tb=%f\t%f\n",a,b,c);//注意输出为%f
	printf("area=%f\n", area);
	//return 0;

}