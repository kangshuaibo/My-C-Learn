//指向一维数组的指针变量
#include <stdio.h>
int main()
{
	int a[3][4]={1,3,5,7,9,11,13,15,17,19,21,23};

	int(*p)[4],i,j;
	p=a;
	printf("请输入行号和列号\n");
	 scanf("%d%d",&i,&j);
	printf("a[%d][%d]=%d\n",i,j, *( *(p+i)+j ) );
	return 0;
}