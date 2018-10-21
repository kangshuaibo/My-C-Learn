//编写一个函数print输出一个学生的成绩数组，该数组中有5个学生的数据距离每个记录包括num,name,score[3],用煮函数输入这些记录 用print函数输出这些记录
#include <stdio.h>
#define N 5
struct student
{
	char num[6];
	char name[8];
	int score[4];
}stu[N];

int main()
{
	void print(struct student stu[]);

	int i;
	for(i=0;i<N;i++)
	{
		printf("please input information of student%d:\n",i+1);

		printf("No.:");  //编号
		scanf("%s",stu[i].num);

		printf("name:");//姓名
		scanf("%s",stu[i].name);

		for(int j=0;j<3;j++)//四门课成绩 循环输入
		{
			printf("score%d:",j+1 );
			scanf("%d",&stu[i].score[j]);
		}
		printf("\n");
	}
    //调用
	print(stu);

	return 0;
}

void print(struct student stu[])
{   int i,j;
	printf("\nN0.        name   score1  score2  score3\n");
	for(i=0;i<N;i++)
	{
		printf("%5s%10s",stu[i].num,stu[i].name );
		for(j=0;j<3;j++)
		{
          printf("%9d",stu[i].score[j] );
		}
		printf("\n");
	}
}