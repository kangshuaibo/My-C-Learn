#include<stdio.h>
int main()
{
	void move(int array[20],int,int);

	int number[20],n,m,i;

	printf("hao many numbers?\n");
	 scanf("%d",&n);

	printf("input%dnumbers:",n );
	for(i=0;i<n;i++)
		scanf("%d",&number[i]);

	printf("hao many place you want move?\n");
	 scanf("%d",&m);
    //调用
	move(number,n,m);

	printf("now,they are:\n");
	for(i=0;i<n;i++)
		printf("%d ",number[i] );
}

void move(int array[20],int n,int m)
{
	int *p,array_end;
	p=array+n-1;
	array_end=*p;//把最后一个元素保存
	for(p=array+n-1;p>array;p--) //从最后一个元素逐个移动一个位置
		*p=*(p-1);
	*array=array_end;//把保存的给开头语
	m--;//要移动几个位置 递归调用
	if(m>0)
		move(array,n,m);

}