#include <stdio.h>
int main()
{
	int a[5]={1,3,5,7,9};
	int *num[]={&a[0],&a[1],&a[2],&a[3],&a[4]};

	int **p,i;  //p为指向指针的指针变量
	p=num;
	for(i=0;i<5;i++)
	{
		printf("%d ",**p );
		p++;
	}
	printf("\n");
	return 0;
}