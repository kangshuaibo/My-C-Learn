#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
	float a,x0,x1;
	printf("请输入a=");
	scanf("%f",&a);
	x0=a/2;
	x1=(x0+a/x0)/2;
	while(fabs(x0-x1)>=1e-5)
	{
      x0=x1;
      x1=(x0+a/x0)/2;
	}

  printf("a的平方根为%f\n",x1 );

	return 0;
}