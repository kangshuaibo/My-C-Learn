#include<stdio.h>
#define SIZE 3
struct student_type
{
	char name[10];
	int num;
	int age;
	char addr[15];
}stud[SIZE];

void save()
{
	FILE*fp;
	int i;
	if((fp=fopen("stu.dat","wb"))==NULL)
	{
		printf("cannot open file\n");
		return;
	}
	for(i=0;i<SIZE;i++)
		if(fwrite(&stud[i],sizeof(struct student_type),1,fp)!=1)
			printf("file write error\n");
	fclose(fp);
}

int main()
{
	int i;
	printf(":Please enter data of studebt:\n");
	for(i=0;i<SIZE;i++)
		scanf("%s%d%d%s",stud[i].name,&stud[i].num,&stud[i].age,stud[i].addr);
	save();
	return 0;
}
