//求1 - 1/2 + 1/3 - 1/4 + ...+ 1/99 - 1/100的和
#include <stdio.h>
int main(){
	int sign=1;//正负号
	double deno=2,sum=1,term;//分别存放分母 累加和 和当前项的值
	while(deno<=100){
		sign=-sign;//符号变负数
		term=sign*1/deno;//
		sum=term+sum;
		deno=deno+1;
	}
	printf("%f",sum);
    return 0;
}