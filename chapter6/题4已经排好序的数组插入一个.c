#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a[13]={1,4,6,9,13,16,19,28,40,100};
	//输出这个数组
	int i;
	printf("这个数组原来是:");
	for(i=0;i<10;i++)
	printf("%d ", a[i]);

    printf("\n");

    
    //插入一个数 保存到number中
    int number;
    printf("请输入要插入的数number=");
    scanf("%d",&number);

    printf("\n");

    // 由于数组升序 与数组最后一个数比较
    int temp1,temp2,j;
    if(number>=a[9])
    	a[10]=number;
    else
    {
    	for(i=0;i<10;i++)
    	{
    		if(a[i]>number)//大于这个被插数 就插在这里 大于被插数这个的数就后移
    		{ 	
    		    temp1=a[i];
    			a[i]=number;
    			for(j=i+1;j<=10;j++)
    			{
                   temp2=a[j];
                   a[j]=temp1;
                   temp1=temp2;
    			}  
    			  		
             break;
            }
    	}
    }

    //输出数组
    printf("插入元素后数组为:");
    for(i=0;i<=10;i++)
    	printf("%d ",a[i] );
    printf("\n");

	return 0;
}