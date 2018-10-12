#include <stdio.h>
int main(int argc, char const *argv[])
{
	int i;
	double bonus,bon1,bon2,bon4,bon5,bon6,bon10;
	int branch;
	bon1=100000*0.1;
	bon2=bon1+100000*0.075;
	bon4=bon2+200000*0.05;
	bon6=bon4+200000*0.03;
	bon10=bon6+400000*0.015;
	printf("请输入利润\n");
	scanf("%d",&i);
	/*if(i<100000)//方法一
		bonus=i*0.1;
	else if(i<200000)
		bonus=bon1+(i-100000)*0.075;
	else if(i<400000)
		bonus=bon2+(i-200000)*0.05;
	else if(i<600000)
		bonus=bon4+(i-200000)*0.03;
	else if(i<1000000)
		bonus=bon6+(i-400000)*0.015;
	else
		bonus=bon10+(i-1000000)*0.01;//方法一到此*/


branch=i/100000;//方法二
if(branch>10) 
	branch=10;
switch(branch)
{
	case 0:bonus=i*0.1;break;
	case 1:bonus=bon1+(i-100000)*0.075;break;
	case 2:
	case 3:bonus=bon2+(i-200000)*0.05;break;
	case 4:
	case 5:bonus=bon4+(i-200000)*0.03;break;
	case 6:
	case 7:
	case 8:
	case 9:bonus=bon6+(i-400000)*0.015;break;
	case 10:bonus=bon10+(i-1000000)*0.01;break;
}//方法二到此

	printf("奖金是：%10.2f\n",bonus );
	return 0;
}