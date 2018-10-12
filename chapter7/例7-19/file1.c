//给定b的值输入a和m求a*b和a^m的值
#include <stdio.h>
#include "file2.c"
int A;//定义外部变量
int main()
{
 int b=3,c,d,m;
 int power(int m);//声明
 printf("请输入乘数a和幂数m");
 scanf("%d%d",&A,&m);
 c=A*b;
 d=power(m);
 int power(int m);//声明
printf("a*b=%d,a^m=%d\n",c,d);

return 0;
}

