#include<stdio.h>
int main()
{
	int *p1,*p2,*p,a,b;

	printf("请输入两个整数\n");
	scanf("%d%d",&a,&b);

	p1=&a;
	p2=&b;
    
    if(a<b)
    {
    	p1=&b;
    	p2=&a;
    }
	/*if(a<b)
	{
      p=p1;
      p1=p2;
      p2=p;
	}*/
	printf("%d%d\n",a,b);
    printf("max=%d,min=%d\n",*p1,*p2);
}