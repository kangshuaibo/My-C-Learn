//非二元方程 无根 相等实根 不等实根 复根
#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
	double a,b,c,disc,x1,x2,realpart,imagpart;
	scanf("%lf%lf%lf",&a,&b,&c);
if(fabs(a)<=1e-6)
printf("这不是二元一次方程\n");
else
{    disc=b*b-4*a*c;
	if(fabs(disc)<=1e-6)
		printf("两个相等实根x1=x2=%f\n", -b/(2*a));
	else
		{ 
			if(disc>1e-6)//注意花括号
			{
			   x1=(-b+sqrt(disc))/(2*a);
		       x2=(-b-sqrt(disc))/(2*a);//注意括号
			   printf("两个不相等实根x1=%f,x2=%f\n", x1,x2);
			}
			else
			{
				realpart=-b/2*a;
			    imagpart=sqrt(-disc)/2*a;
			    printf("有复根\n");
				printf("x1=%6.2f+%6.2fi\n",realpart,imagpart);
				printf("x2=%6.2f-%6.2fi\n",realpart,imagpart);
     
			}
		}	

}
      

	return 0;
}
