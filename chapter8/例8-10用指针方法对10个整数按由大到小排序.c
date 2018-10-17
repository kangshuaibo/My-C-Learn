#include <stdio.h>
int main()
{
  void sort(int x[],int n);

  int i,*p,a[10];

  p=a;

  printf("请输入10个整数：\n");
  for(i=0;i<10;i++)
  	scanf("%d",p++);

  p=a;
  sort(p,10);

  printf("排序后的数组为：\n");
  for(i=0;i<10;i++)
  {
  	printf("%d ",*p);
  	p++;
  }
  printf("\n");
	return 0;
}

void sort(int x[],int n)//选择排序要牢记
{
	int i,j,k,temp;
	for(i=0;i<n;i++)
	{
		k=i;
	  for(j=i;j<n;j++)
	  	if(x[j]>x[k])
	  		k=j;
  	
       temp=x[i];
       x[i]=x[k];
       x[k]=temp;
	  	
	}
		

}