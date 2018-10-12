#include <stdio.h>
#define N 7
int main(int argc, char const *argv[])
{
	int a[N];
	//输入数组
	printf("请输入递增数组:\n");
    int i=0;
	while(i<N)
	{
       scanf("%d",&a[i]);
       if(a[i]>=a[i-1])
       	i++;
       else
       	printf("请重新输入:");
	}
	//输出数组
	//这个数组为
	printf("输入的数组为:");
	for(i=0;i<N;i++)
	{
		printf("%d ",a[i] );
	}

	printf("\n");

	

	int flag=1,sign,mid,top,bottom,number,loca;
	char ch;
	while(flag)
	{
        //输入这个数
		
	    printf("请输入要查找的数:");
		scanf("%d",&number);

        top=0;
        bottom=N-1;
        sign=0;//尚未找到
        if((number<a[0])||(number)>a[N-1])
             loca=-1;//用来判断是否越界 及标记找到的数
        while(!sign&&(top<=bottom))
        {
          mid=(top+bottom)/2;
          if(a[mid]==number)
          {
          	
            loca=mid;
          	printf("找的了这个数%d为第%d个\n",number,(loca+1));
          	sign=1;
          }
          else
          	if(a[mid]>number)
          		bottom=mid-1;
          	else
          		top=mid+1;
        }

        if(!sign||(loca==-1))
        	printf("没找到\n");
        //判断重新查找
        
        printf("还要查找吗(y/n):");
        scanf("%s",&ch);
        if(ch=='n'||ch=='N')
             flag=0;
    }
	return 0;
}