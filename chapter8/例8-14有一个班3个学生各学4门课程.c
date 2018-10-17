#include<stdio.h>
int main()
{
	void average(float *p,int n);
	void search(float (*p)[4],int n);
	void search_Low(float (*p)[4],int n);

	float score[3][4]={{88,89,67,54},{65,75,34,65},{90,78,94,82}};

	average(*score,12);
	search(score,2);

	search_Low(score,3);//例题8-15
	return 0;
}

void average(float *p,int n)
{
	float *p_end;
	float sum,aver;

	sum=0;
	p_end=p+n-1;
	for(;p<p_end;p++)
		sum=sum+(*p);
	aver=sum/n;
	printf("平均分：%f\n",*p );
}

void search(float (*p)[4],int n)
{
	int i;

	printf("第%d位学生的成绩是",n);
	for(i=0;i<4;i++)
	{
		printf("%f ",*( *(p+n) + i ) );
	}
	printf("\n");

}
//************例题8-15
void search_Low(float (*p)[4],int n)
{
	int i,j,flag;
	for(j=0;j<n;j++)
	{
      flag=0;
      for(i=0;i<4;i++)
      	if( *( *(p+j) + i )<60 ) flag=1;
      if(flag==1)
      { printf("序号为%d有不及格，他的全部成绩为：", j+1);
      	for(i=0;i<4;i++)
      		printf("%f  ",*( *(p+j) + i) );
      	printf("\n");
      }
 

	}
}