//购房从银行贷款了一笔钱d准备每月还贷款p月利率为r计算多少月能还清？
//注：取d为3000 p为6000 r为1% 月份取小数点后一位 第二位小数四舍五入
//计算公式见书p16 函数库lg10表示数学中lg
#include <stdio.h>
#include <math.h>
int main(){
	float d=300000,p=6000,r=0.01,m;
	m=log10(p/(p-d*r))/log10(1+r);
	printf("m=%8.1f\n",m);
	return 0;
}
