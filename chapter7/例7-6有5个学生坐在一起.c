#include <stdio.h>
int main(int argc, char const *argv[])
{   int n;
	int age(int n);//声明
	printf("第5个学生年龄为%d\n",age(5) );
	return 0;
}



int age(int n)
{  int c;
  if(n==1)
  	c=10;
  else
  	c=age(n-1)+2;
  	return c;
}