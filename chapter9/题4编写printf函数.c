#include <stdio.h>
#define N 5
struct student
{
	char num[6];
	char name[10];//❌这里注意定义的是数组
	float score[4];
}stu[N];

int main()
{
	void input(struct student stu[]);//声明
	void print(struct student stu[]);

	input(stu);
	print(stu);

	return 0;
}

void input(struct student stu[])
{   int i;
	for(i=0;i<N;i++)
	{
      printf("please input num/name/score of the stuent%d:\n",i+1);

      printf("No.:");
      scanf("%s",stu[i].num);

      printf("name:");
      scanf("%s",stu[i].name);

      int j;
      for(j=0;j<3;j++)
      { printf("please enter the score%d:",j+1 );
      	scanf("%f",&stu[i].score[j]);
      }
	}
}

void print(struct student stu[])
{
 printf("No.  name     score1  score2  score3\n");
 int i,j;
 for(i=0;i<N;i++)
  {
  	printf("%-5.1s%-10.1s",stu[i].num,stu[i].name );
  	for(j=0;j<3;j++)
  		printf("%-9.1f",stu[i].score[j] );
  	printf("\n");

  }

}