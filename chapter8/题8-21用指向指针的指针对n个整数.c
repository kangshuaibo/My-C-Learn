#include <stdio.h>
int main(int argc, char const *argv[])
{
	void sort(int **p,int n);

	int i,n,data[20],**p,*pstr[20];

    //输入是几个数
	printf("enter n\n");
	 scanf("%d",&n);


    //连接指针数组和存放数的数组
	for(i=0;i<n;i++)
		pstr[i]=&data[i];

	printf("enter %dnumbers:\n",n);
	 for(i=0;i<n;i++)
	 	scanf("%d",pstr[i]);

	p=pstr;
	sort(p,n);

	printf("Now,the number is\n");
    for(i=0;i<n;i++)
    {
    	printf("%d ",*pstr[i] );
    }
    printf("\n");

	return 0;
}

void sort(int **p,int n)
{
	int i,j,*temp;
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if( **(p+i) > **(p+j) )
			{
				temp=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=temp;
			}
		}
	}
}