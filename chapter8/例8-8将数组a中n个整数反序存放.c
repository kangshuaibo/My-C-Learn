#include<stdio.h>
int main()
{
	void inv(int *x,int n); //声明

	int i,a[10]={3,7,9,10,0,6,7,5,4,2};

	printf("交换前的数组：\n");
	for(i=0;i<10;i++)
      printf("%d ",a[i]);
    printf("\n");

    inv(a,10);//调用

    printf("交换后的数组为：\n");
    for(i=0;i<10;i++)
    	printf("%d ",a[i]);
    printf("\n");

  return 0;
}

void inv(int *x,int n)
{
	int temp,i,j,m;
	m=(n-1)/2;
	for(i=0;i<m;i++)
	{ 
		j=n-1-i;
		temp=x[i];
		x[i]=x[j];
		x[j]=temp;
	}

}