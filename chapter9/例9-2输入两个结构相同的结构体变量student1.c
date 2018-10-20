//输入两个学生的学号、姓名和成绩，输出成绩较高的学生的学号姓名和成绩
#include <stdio.h>
int main()
{
	struct Sudent //建立结构体类型
	{
		int num;
		char name[20];
		float score;
	}student1,student2;//用结构体类型 定义变量

    printf("please enter num name score\n");
	scanf("%d%s%f",&student1.num,student1.name,&student1.score);
	scanf("%d%s%f",&student2.num,student2.name,&student2.score);

	printf("the higher score is:\n");

	if(student1.score>student2.score)
		printf("%d %s %f\n",student1.num,student2.name,student1.score );
	else if(student1.score<student2.score)
		printf("%d %s %f\n",student2.num,student2.name,student2.score );
	else
	{
		printf("%d %s %f\n",student1.num,student1.name,student1.score );
	    printf("%d %s %f\n",student2.num,student2.name,student2.score );
    }

	return 0;
}