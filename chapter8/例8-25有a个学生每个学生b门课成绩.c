#include<stdio.h>
int main()
{
	
	float *search(float (*pointer)[4],int b);//声明

	float score[][4]={{60,70,80,90},{56,89,67,88},{34,78,90,66}};
	float *p;
	int i,k;

	printf("请输入学生号：\n");
	 scanf("%d",&k);
    printf("序号%d学生成绩为：\n",k );
    p=search(score,k);//传入数组首元素地址 返回k所在行地址
    
    for(i=0;i<4;i++)
       printf("%f ",*(p+i) );
    printf("\n");

   return 0;

}

float *search(float (*pointer)[4],int n)//形参为指向 一维数组的指针变量
{
	float *pt;
	pt=*(pointer + n);
	return pt;

}