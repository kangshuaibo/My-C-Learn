//从键盘输入一个小于1000正数 要求输出他的平方根
//要求输入数据检查是否小于1000的正数 若不是要求重新输入
#include <stdio.h>
#include <math.h>
#define M 1000  
int main(int argc, char const *argv[])
{
	int i,k;
	printf("请输入一个小于%d的整数i:\n",M );
	scanf("%d",&i);
	while(i>M)//循环检出
	{
		printf("输入的数据不符合要求请重新输入一个小于%d的整数i:\n",M );
		scanf("%d",&i);
		
	}
	k=sqrt(i);
	printf("%d的平方根整数部分是%d\n",i,k); 

	return 0;
}
