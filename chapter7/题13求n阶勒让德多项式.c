#include <stdio.h>
int main()
{ int x,n;
//声明
  float p(int n,int x);
 //输入函数
  printf("请输入x值：");
  scanf("%d",&x );
  printf("请输入n值：");
  scanf("%d",&n );
 //调用函数
  p(n,x);
  //输出函数
  printf("p%d(%d)=%f\n",n,x,p(n,x) );
 
  return 0;
}

float p(int n,int x)
{
if(n==0)
	return 1;
else if(n==1)
	return x;
else
	return ( (2*n-1)*x-p((n-1),x)-(n-1)*p((n-2),x)/n );//书中有答案❌题目给的是减号

}