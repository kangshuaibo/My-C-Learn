#include <stdio.h>
int main()
{
	void change(int *p);
	int a[5][5],*p,i,j;

	printf("input matrix\n");
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",&a[i][j]);
	p=&a[0][0];
	change(p);
	printf("Now,matrix is\n");
	for(i=0;i<5;i++)
	{	for (j = 0; j < 5; j++)
			printf("%d ",a[i][j] );
	   printf("\n");
	}	
		return 0;
}

void change(int *p)
{
	int i,j,temp;
	int *pmax,*pmin;

	pmax=p;
	pmin=p;
	for(i=0;i<5;i++)//找出最大和最小的地址
		for(j=i;j<5;j++)
		{
			if(*pmax<*(p+5*i+j))pmax=p+5*i+j;
			if(*pmin>*(p+5*i+j))pmin=p+5*i+j;
		}
		temp=*(p+12);//最大给中心
		*(p+12)=*pmax;
		*pmax=temp;

        temp=*p;  //最小左上角
		*p=*pmin;
		*pmin=temp;

	pmin=p+1;      //找第二最小
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			if(   ((p+5*i+j)!=p)&&(*pmin>*(p+5*i+j)))
				pmin=p+5*i+j;
		temp=*pmin;
		*pmin=*(p+4);
		*(p+4)=temp;

	pmin=p+1;      //找第三最小
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			if(  ((p+5*i+j)!=(p+4) )&&( (p+5*i+j)!=p )&&( *pmin>*(p+5*i+j) )  )
				pmin=p+5*i+j;
		temp=*pmin;
		*pmin=*(p+20);
		*(p+20)=temp;

	pmin=p+1;       //找第四最小
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			if(  ( (p+5*i+j)!=p )&&( (p+5*i+j)!=(p+4) )&&( (p+5*i+j)!=(p+20) )&&( *pmin>*(p+5*i+j) )  )
				pmin=p+5*i+j;

        temp=*pmin;
		*pmin=*(p+24);
		*(p+24)=temp;



}