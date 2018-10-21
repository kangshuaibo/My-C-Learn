//有十个学生，每个学生的数据包括学号、姓名、三门课成绩 
//从键盘输入10个学生数据 要求输出三门课总平均成绩 以及最高分学生的数据
#include <stdio.h>
#define N 5
struct student 
{
	char num[6];
	char name[10];
	float score[3];
	float ave;
}stu[N];

int main(int argc, char const *argv[])
{
	//输入
	int i,j;
	for(i=0;i<N;i++)
	{
		printf("please input information of student%d \n",i+1);

		printf("No.:");
		scanf("%s",stu[i].num);

		printf("name:");
		scanf("%s",stu[i].name);
        for(j=0;j<3;j++)
        {
			printf("score%d",j+1);
			scanf("%f",&stu[i].score[j]);
        }
		
	}

	//计算
	float ave,average,sum=0,max=0;
	int maxi=0;
	for(i=0;i<N;i++)
		{
			for(j=0;j<3;j++)
			  sum+=stu[i].score[j];//计算i学生的总分
			stu[i].ave=sum/3.0;

			average+=stu[i].ave;

			if(sum>max)//求虽高的学生
			{
				max=sum;
				maxi=i;
			}
		}
		average/=N;

	//输出
	printf("No.   name      score1   score2   score3  average\n");//分别输出学生
	for(i=0;i<N;i++)
	{
		printf("%-5s %-10s",stu[i].num,stu[i].name );
		for(j=0;j<3;j++)
			printf("%-9.1f",stu[i].score[j]);

		printf("%f\n",stu[i].ave );

	}
	printf("The average of students:\n");//总平均分
	printf("%f\n",average );

	printf("The highset student information:\n");//最高分的学生信息
	printf("No. name          score1   score2  score3\n");

	printf("%-5s%-10s",stu[maxi].num,stu[maxi].name );
	for(i=0;i<3;i++)
		printf("%-9.1f",stu[maxi].score[i] );

	printf("%f\n",stu[maxi].ave );


	
	return 0;
}