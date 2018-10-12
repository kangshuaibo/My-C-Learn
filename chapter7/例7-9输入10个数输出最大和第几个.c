#include <stdio.h>
int main()
{
  int a[10],m,n;//n用来记录第几个
  int max(int x,int y);//声明
  printf("请输入数组元素:");
  int i;
  for(i=0;i<10;i++)
   scanf("%d",&a[i]);

  printf("\n");
  m=a[0]; //m用来存放max 假设第一个最大
  for(i=0,n=0;i<10;i++)
  {
    if(max(m,a[i])>m)  //数组元素可以作为实参
    {
    	m=max(m,a[i]);
        n=i;
    }
  }
  printf("最大为%d为第%d个\n",m,n+1);

  
}

int max(int x,int y)   //数组元素不能做形参
{
	int z;
	z=x>y?x:y;
	return z;
}