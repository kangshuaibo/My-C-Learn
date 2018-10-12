#include <stdio.h>
int main()
{
	double a=2,b=1,s=0,t;
	int i;
	for(i=1;i<=20;i++)
	{
		
		s=s+a/b;
		t=a+b;
		b=a;
		a=t;
	}
	printf("%f\n",s );

}