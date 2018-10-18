//n个人围城一个圈 从第一个人开始报数（从1-3报数）凡是报道3的人退出圈子问最后留下的是原来几号位置
#include <stdio.h>
int main()
{
  int num[50],n,*p,i,k,m;
  
  printf("请输入多少个人：\n");
   scanf("%d",&n);
  p=num;
  for(i=0;i<n;i++) //编号
  	*(p+i)=i+1;

 i=0;
 k=0;
 m=0;
  while(m<n-1)
  {
    if(*(p+i)!=0) 
    	k++;//记录1 2 3 报3 杀人

    if(k==3)
    {
    	*(p+i)=0;
    	k=0;
    	m++;//为退出人数
    }

     i++;//每次循环计数

    if(i==n) 
     i=0;

  }
  while(*p==0) 
  	p++;
  printf("最后一个编号是：%d\n",*p );




  return 0;
}