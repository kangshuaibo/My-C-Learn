#include <stdio.h>
int main()
{
	int a,b,c,d,max;
	int max4(int a,int b,int c,int d);//声明
	printf("请输入四个数：");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	//调用
	max=max4(a,b,c,d);
	printf("最大者为：%d\n",max );

}

int max4(int a,int b,int c,int d)
{
  int m;
  int max2(int a,int b);//声明
  //调用
  m=max2(a,b);
  m=max2(m,c);
  m=max2(m,d);
  return m;
}
int max2(int a,int b)
{
  int z;
  z=a>b?a:b;
  return z;
}