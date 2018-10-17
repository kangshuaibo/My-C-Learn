#include<stdio.h>
int main()
{
	void inv(int *x,int n);//声明


	int i,arr[10],*p=arr;//定义指针变量p 并指向 数组名代表的 数组首元素的 地址


	 printf("请输入十个数：\n");
	 for(p=arr;p<(arr+10);p++)
	 {
       scanf("%d",p);//p为地址变量 
	 }//此时p指向数组末尾


	p=arr;     //😊使指针变量指向 数组名所代表的数组首元素 地址
	inv(p,10); //做实参


	 printf("排序后的数为：\n");
	 for(p=arr;p<(arr+10);p++)
	 {
		printf("%d",*p );
	 }
	 printf("\n");


	 return 0;
}
void inv(int *x,int n)
{
 int *p,*i,*j,temp,m;
 i=x;
 j=x+n-1;
 m=(n-1)/2;
 p=x+m;

 for(;i<p;i++,j--)
 {
 	temp=*i;
 	*i=*j;
 	*j=temp;
 }
}