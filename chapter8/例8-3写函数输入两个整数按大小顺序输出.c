#include<stdio.h>
int main()
{ 
  void swap(int *p1,int *p2);//声明

  int a,b;
  int *pointer_1,*pointer_2;//定义指针变量

  printf("请输入两个整数：\n");
  scanf("%d%d",&a,&b);

  pointer_1=&a;//指针变量得地址
  pointer_2=&b;


  if(a<b)
  {
  	swap(pointer_1,pointer_2);//指针变量作为函数参数 把地址传过去
  }

  printf("max=%d,min=%d\n",a,b );



 return 0;
}

void swap(int *p1,int *p2)//接收地址
{
  int temp;
  temp=*p1;//指针变量所指向的变量*p1就是a 这两个等价 即为交换a和b的置
  *p1=*p2;
  *p2=temp;
}