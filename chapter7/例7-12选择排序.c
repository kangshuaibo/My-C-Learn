#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a[10];
	void sort(int array[],int n);//声明
	//输入数组
	int i;
	printf("请输入待排数组：");
	for(i=0;i<10;i++)
	 scanf("%d",&a[i]);

	//调用排序函数
	sort(a,10);
	//输出数组
	printf("排序后的数组为：");
	for(i=0;i<10;i++)
		printf("%3d ",a[i]);
	printf("\n");
	return 0;
}
void sort(int array[],int n)
{
	int i,j,k,temp;
	for(i=0;i<n-1;i++)
	{
		k=i;
	    for(j=i+1;j<n;j++) 
	    	if(array[j]<array[k])
		        k=j;
		temp=array[k];
	    array[k]=array[i];
	    array[i]=temp;
	    
	}

}