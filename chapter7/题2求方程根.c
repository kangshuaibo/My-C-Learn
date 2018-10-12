#include<stdio.h>
#include<math.h>
float x1,x2,disc,p,q;//全局变量
int main()
{
	float a,b,c;
	//输入数据
	printf("请输入方程参数a、b、c:");
	scanf("%f%f%f",&a,&b,&c);
	disc=b*b-4*a*c;
	void bigger_than_zero(float a,float b,float disc);//声明
	void equal_to_zero(float a,float b);
	void smaller_then_zero(float a,float b,float disc);
	
	//调用函数
	printf("根为：");
	
    if(disc>0)
    	bigger_than_zero(a,b,disc);
    else if(disc==0)
    	equal_to_zero(a,b);
    else
    	smaller_then_zero(a,b,disc);


	return 0;
}


void bigger_than_zero(float a,float b,float disc)
{
	x1=(-b+sqrt(disc))/(2*a);
	x2=(-b-sqrt(disc))/(2*a);
	printf("两实根x1=%f,x2=%f\n",x1,x2);

}
void equal_to_zero(float a,float b)
{
	x1=-b/(2*a);
	printf("两相等实根x1=x2%f\n",x1);
}
void smaller_then_zero(float a,float b,float disc)
{
	p=-b/(2*a);
	q=sqrt(-disc)/(2*a);
	printf("有两个虚根：x1=%f+%fi,x2=%f-%fi",p,q,p,q);
}