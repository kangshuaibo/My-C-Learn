#include<stdio.h>
int main()
{
	int *p,i,a[10];

	p=a;

	printf("请输入10个数：");
	for(i=0;i<10;i++)
	{
		scanf("%d",p++);
	}//此时p已经在数组的末尾了
    
    p=a;//使p重新指向a[0] 数组名代表首元素地址

	for(i=0;i<10;i++,p++)
	{
		printf("%d ",*p);
	}

	printf("\n");

	return 0;
}