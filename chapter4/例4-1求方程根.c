#include <stdio.h>
#include <math.h>
int main (){
	double a,b,c,disc,p,q,x1,x2;
	scanf("%lf%lf%lf",&a,&b,&c);
	disc=b*b-4*a*c;

	/*p=-b/2*a;
	q=sqrt(disc)/2*a;
	x1=p+q;
	x2=p-q;*/
	if (disc<0)
	{
		printf("没有实根");
	}
	else
		{
			p=-b/(2*a);
			q=sqrt(disc)/(2*a);
			x1=p+q;
			x2=p-q;
			printf("有两个相等实根\n");
             printf("x1=%6.2f\tx2=%6.2f\n",x1,x2 );
		}
		

}