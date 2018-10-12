#include <stdio.h>
int main()
{
	int x,y;
	printf("请输入x:");
	scanf("%d",&x);
	if(x<1)
		printf("y=x=%d",x);
	else
		if(x<10)
	     printf("y=2*x-1=%d\n",2*x-1);
	     else
	     	printf("y=3*x-11=%d\n",3*x-11);
	 return 0;

}