#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a,b,c,d,t;
	printf("请输入四个数\n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>b)
	{
		t=a;
		a=b;
		b=t;
	}
	if(a>c)
	{
		t=c;
		c=a;
		a=c;
	}
	if(a>d)
	{
		t=d;
		d=a;
		a=t;
	}
	if(b>c)
	{
		t=b;
		b=c;
		c=t;
	}
	if(b>d)
	{
		t=b;
		b=d;
		d=t;
	}
	if(c>d)
	{
		t=c;
		c=d;
		d=t;
	}
	printf("四个数由小到大顺序为\n");
	printf("%d,%d,%d,%d\n",a,b,c,d );
	return 0;
}