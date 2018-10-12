//求标准一元二次方程根,用求根公式
#include <stdio.h>
#include <math.h>
int main(){
	double a,b,c,disc,p,q,x1,x2;//disc为德尔他，pq为把根拆开的部分
	scanf("%lf%lf%lf",&a,&b,&c);//键盘输入时->1空格3空格2 数字需要空格分割 字符型不需要
	disc=b*b-4*a*c;

	p=-b/2*a;
	q=sqrt(disc)/2*a;
	
	x1=p+q;
	x2=p-q;
	printf("x1=%7.2f\nx2=%7.2f\n",x1,x2);
	return 0;
}