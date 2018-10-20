#include <stdio.h>
#include <string.h>

struct Person
{
	char name[20];
	int count;
}leader[3]={"Li",0,"Zhang",0,"Sun",0};


int main(int argc, char const *argv[])
{
	int i,j;
	char leader_name[20];  //存放输入的名字
	for(i=0;i<10;i++)
	{
		scanf("%s",leader_name);
		for(j=0;j<3;j++)
			if(strcmp(leader_name,leader[j].name)==0)//输入的名字相同 票数加一
				leader[j].count++;

	}

	printf("\nResule\n");
	for(i=0;i<3;i++)
		printf("%s:%d\n",leader[i].name,leader[i].count );

	return 0;
}