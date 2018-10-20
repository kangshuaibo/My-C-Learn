//有若干个人员的数据，其中有学生和教师。学生的数据包括姓名号码性别 职业 班级。
//教师的数据包挎哦姓名号码性别职业职务要求用同一个表格来处理
#include <stdio.h>
struct
{
	int num;
	char name[10];
	char sex;
	char job;
	union
	{
		int clas;
		char position[10];
	}category;
}person[2];

int main(int argc, char const *argv[])
{
	int i;
	for(i=0;i<2;i++)
	{
		printf("please enter the data of person\n");
		scanf("%d %s %c %c",&person[i].num,person[i].name,&person[i].sex,&person[i].job);

		if(person[i].job=='s')
			scanf("%d",&person[i].category.clas);
		else if(person[i].job=='t')
			scanf("%s",person[i].category.position);
		else
			printf("error!!!\n");
	}

	printf("\n");

	printf("No.  name       sex   job class/position\n");
	for(i=0;i<2;i++)
	{
		if(person[i].job=='s')
			printf("%-6d%-10s%-4c%-4c%-10d\n",person[i].num,person[i].name,person[i].sex,person[i].job,person[i].category.clas );
		else
			printf("%-6d%-10s%-4c%-4c%-10s\n",person[i].num,person[i].name,person[i].sex,person[i].job,person[i].category.position );
	}
	return 0;
}