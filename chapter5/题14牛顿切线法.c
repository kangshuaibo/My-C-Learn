#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
	float x0,x1,f1,f;


    x1=1.5;
    x0=x1;
	f=((2*x0-4)+3)*x0-6;
	f1=(6*x0-8)*x0+3;
    x1=x0-f/f1;
	while(fabs(x1-x0)>=1e-5)//迭代法 直接用do while做
	 { 
	 x0=x1;
	 f=((2*x0-4)+3)*x0-6;
	 f1=(6*x0-8)*x0+3;
     x1=x0-f/f1;
	}
	printf("根为%f\n",x1);
	return 0;
}