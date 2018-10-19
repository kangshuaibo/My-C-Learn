#include <stdio.h>
int main()
{  int str_cmp(char *,char *);//声明
   char str1[20],str2[20],*p1,*p2;
   int m;//存放返回的值
   //输入
   printf("please enter two strings:\n");
   scanf("%s",str1);
   scanf("%s",str2);

   p1=str1;
   p2=str2;
   //调用
   m=str_cmp(str1,str2);
   printf("the resule is %d\n",m );

	return 0;
}

int str_cmp(char* p1,char* p2)
{
	int i;

	i=0;//定位while
	while( *(p1+i) == *(p2+i) )//逐个比较 有不同不循环 直接返回差值
	{
		if(*(p1+i)=='\0')//一直比较到最后都一样
			return 0;
		i++;//定位while
	}
	return ( *(p1+i)-*(p2+i) );

	
}