#include<stdio.h>
#include<string.h>
int main()
{
	void sort(char *name[],int n);//声明一维指针数组 存放指针
	void print(char *name[],int n);
    //存放了字符串首地址
	char *name[]={"Fellow me","BISCI","Great Wall","FORTRAN","Computer Disign"};

	int n=5;
	sort(name,n);
	print(name,n);

	return 0;

}

void sort(char *name[],int n)
{
	char *temp;
	int i,j,k;
	for(i=0;i<n-1;i++)
	{
	  k=i;
	  for(j=i+1;j<n;j++)
	  	if( strcmp(name[k],name[j])>0 )
	  		k=j;
	  	temp=name[i];
	  	name[i]=name[k];
	  	name[k]=temp;
	}

}

void print(char *name[],int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%s\n",name[i] );//输出首地址%s 就是输出 字符串
}