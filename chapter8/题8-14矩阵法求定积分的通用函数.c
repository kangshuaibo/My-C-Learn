#include <stdio.h>
#include <math.h>
int main()
{
	float integral(float (*)(float),float,float,int);
	float fsin(float);
	float fcos(float);
	float fexp(float);
	float a1,b1,a2,b2,a3,b3,c,(*p)(float);
	int n=20;//精确度 即划分20 次

	printf("inputa1b1\n");
	 scanf("%f%f",&a1,&b1);

	printf("inputa2b2\n");
	 scanf("%f%f",&a2,&b2);

	printf("inputa3b3\n");
	 scanf("%f%f",&a3,&b3);

	p=fsin;
	c=integral(p,a1,b1,n);
	printf("The integral of sin(x) is%f\n",c);

	p=fcos;
	c=integral(p,a2,b2,n);
	printf("The integral of con(x) is%f\n",c);

	p=fexp;
	c=integral(p,a3,b3,n);
	printf("The integral od exp(x) is%f\n",c);

	return 0;


}

float integral(float(*p)(float),float a,float b,int n)
{
	int i;
	float x=a,s=0,dx;        //定积分 好好记住啊😝
    dx=(b-a)/n;
    for(i=0;i<n;i++)
    {
      x = x + dx;
	  s = s + (*p)(x) * dx;
    }
    
   return s;

}

float fsin(float x)
{
	return sin(x);
}

float fcos(float x)
{
	return cos(x);
}
float fexp(float x)
{
	return exp(x);
}



