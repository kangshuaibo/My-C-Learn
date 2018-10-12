#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
	float x1,x2,x0,fx1,fx2,fx0;
	do
	{
		printf("请输入区间想x1,x2\n");
		scanf("%f%f",&x1,&x2);
		fx1=x1*((2*x1-4)*x1+3)-6;
		fx2=x2*((2*x2-4)*x2+3)-6;
	}while(fx1*fx2>0);
	printf("1111111\n");
	do
	{
		printf("22222\n");
		x0=(x1+x2)/2;
		fx0=x0*((2*x0-4)*x0+3)-6;
        if((fx1*fx0)<0)
        	{
        	  x2=x0;
        	  fx2=fx0;
            }
        	else
        	{
        	  x1=x0;
              fx1=fx0;
            }

	}while(fabs(fx0)>=1e-5);
	printf("%f\n",x0);
	return 0;
}