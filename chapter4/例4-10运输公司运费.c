#include <stdio.h>
int main(int argc, char const *argv[])
{
	int c,s;//c用于转换case s为路程
	double p,w,d,f;//p为基本运费price w重量 d折扣比率 f总费用
	printf("输入价格 重量 距离 中间用空格分开\n");
	scanf("%lf%lf%d",&p,&w,&s);
	if(p>=3000)
		c=12;
	else
		c=s/250;
	switch(c)
	{
	case 0:d=0;break;
	case 1:d=2;break;
	case 2:
	case 3:d=5;break;
	case 4:
	case 5:
	case 6:
	case 7:d=8;break;
	case 8:
	case 9:
	case 10:
	case 11:d=10;break;
	case 12:d=15;break;
    }
    f=p*w*s*(1-d/100);
    printf("freight=%10.2f\n",f );
	return 0;
}