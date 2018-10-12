#include<stdio.h>
#include <math.h>
int main()
{
	float solut(float a,float b,float c,float d);//声明
    float a,b,c,d;
    printf("请输入方程参数a、b、c、d、：");
     scanf("%f%f%f%f",&a,&b,&c,&d);
    printf("%f\n",solut(a,b,c,d));
    return 0;
}
float solut(float a,float b,float c,float d)
{
	float x=1,x0,f,f1;
	do
    {
    x0=x;
    f=((a*x0+b)*x0+c)*x0+d;
    f1=(3*a*x0+2*b)*x0+c;
    x=x0-f/f1;
    }
    while( fabs(x-x0)>=1e-5  );//❌这里一定是大于 （直到迭代到小于它才结束 即接近0结束）




 return x;
}