#include <stdio.h>
int main()
{
	char c1,c2;
	c1='A';     //一个大写字母 存入ASCII码
	c2=c1+32;   //转换为小写字母 即ASCII码转换
	printf("%c\n",c2);//用%c输出字符 ASCII所代表字符 
	printf("%d\n",c2);//测试此时ASCII值为多少
}