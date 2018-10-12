#include <stdio.h>
int main(int argc, char const *argv[])
{
	int f1=1,f2=1;
	int i;
	for(i=1;i<=20;i++)
	{   printf("%12d%12d",f1,f2);//先输出已经定义的变量值
        if(i%2==0) 
        	printf("\n");//控制换行 每次输出两个数 遇到偶数换每次换输出两次 共四个数
		f1=f1+f2;
		f2=f2+f1;
	}
	return 0;
}