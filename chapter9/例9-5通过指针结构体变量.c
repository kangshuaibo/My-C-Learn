#include <stdio.h>
#include <string.h>
int main()
{
	struct Student
	{
		long num;
		char name[20];
		char sex;
		float score;
		
	};

	struct Student stu_1;
	struct Student *p;    //定义 指向 结构体变量 的指针变量

	p=&stu_1;             //🤩指向结构体变量的地址
	stu_1.num=10101;
	strcpy(stu_1.name,"Li Lin");//没有在定义时赋值 就 必须 这样赋值
	stu_1.sex='M';
	stu_1.score=89;

	printf("No.:%ld\n name:%s\n sex:%c\n score %4.1f\n",stu_1.num,stu_1.name,stu_1.sex,stu_1.score );
	printf("\n");
	printf("No.:%ld\n name:%s\n sex:%c\n score %4.1f\n",(*p).num,(*p).name,(*p).sex,(*p).score );
	printf("\n");
	printf("No.:%ld\n name:%s\n sex:%c\n score %4.1Bf\n",p->num,p->name,p->sex,p->score );
 
 return 0;
}