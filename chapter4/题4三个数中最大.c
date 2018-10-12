#include <stdio.h>
/*int main(int argc, char const *argv[])
{
	int a,b,c;
	printf("请输入三个数\n");
	scanf("%d%d%d",&a,&b,&c);
	if (a<b)
		if(b<c)
			printf("%d\n",c );
		else
			printf("%d\n",b);

	else
		if(a>c)
			printf("%d\n",a );
		else
			printf("%d\n",c );

	  
	return 0;
}
*/
int main(int argc, char const *argv[])
{
	int a,b,c,temp,max;
	printf("请输入三个数\n");
	scanf("%d%d%d",&a,&b,&c);
	temp=(a>b)?a:b;//temp中为ab中较大的那个 表达式真执行语句二 为假执行语句3
	max=(temp>c)?temp:c;//max为这两个中较大的一个
	
	printf("%d\n",max );


	return 0;
}