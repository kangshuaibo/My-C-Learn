//输入10个职工的姓名和职工号
//按职工号有小到大顺序排序，姓名顺序也随之调整
//要求输入一个职工号，用折半查找法找出该职工的姓名 从主函数输入要查找的职工号，输出该职工姓名
#include <stdio.h>
#include <string.h>
#define N 3
int main()
{   //声明
	void inputs(int num[],char name[][8]);
	void sort(int num[],char name[][8]);
	void search(int n,int num[],char name[][8]);

	int num[N],number;
	char name[N][8];
    //调用函数
	inputs(num,name);printf("%d\n",num[2]);
	sort(num,name);

	int ch; //这个ch定义成整型也是醉了❌
	int flag=1;
	while(flag==1)
	{
		printf("请输入要查找的职工号：");
		scanf("%d",&number);
		search(number,num,name);

		printf("继续查找吗？（y/n）\n");
		getchar();
		ch=getchar();
		if(ch=='N'||ch=='n')
			flag=0;
	}
return 0;
}//main over

void inputs(int num[],char name[N][8])
{  int i;
  for(i=0;i<N;i++)
  {
  	printf("请输入职工编号：");
  	scanf("%d",&num[i]);
  	printf("请输入职工姓名：");
  	getchar();                 //这里不太明白❌
  	gets(name[i]);
  }

}

void sort(int num[],char name[N][8])
{//选择排序
	int i,j,min;
	int temp1;
	char temp2[8];

	for(i=0;i<N-1;i++)
	{
      min=i;
      for(j=i;j<N;j++)
      	if(num[min]>num[j])
      		min=j;
      temp1=num[i];
      strcpy(temp2,name[i]);
      num[i]=num[min];
      strcpy(name[i],name[min]);
      num[min]=temp1;
      strcpy(name[min],temp2);

	}
    printf("\n结果\n");
    for(i=0;i<N;i++)
    	printf("%5d%10s\n",num[i],name[i]);
  

}//sort over

void search(int n,int num[],char name[N][8])//n为待查数据
{//折半查找
	int top,bott,mid,loca,sign;

	top=0;
	bott=N-1;

	loca=0;
	sign=1;

	if( (n<num[0])||(n>num[N-1]) )
		loca=-1;
	while( (sign==1)&&(top<=bott) )
	{
		mid=(top+bott)/2;
		if(n==num[mid])
		{
		   loca=mid;
		   printf("NO.%d的员工名字%s\n",n,name[loca] );
		   sign=-1;
        }
        else if (n<num[mid])
        {
        	bott=mid-1;
        }
        else
        	top=mid+1;

	}
	if(sign==1||loca==-1)
		printf("没找到%d\n",n );


}//search over