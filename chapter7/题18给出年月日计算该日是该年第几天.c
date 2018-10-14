#include <stdio.h>
int main(int argc, char const *argv[])
{
	int year,month,day,days;

	int sum_day(int month,int day);
	int leap(int year);
    
    printf("请输入年月日：\n");
	scanf("%d%d%d",&year,&month,&day);

	days=sum_day(month,day);
		if( leap(year)&&month>=3 )
		{
			days=days+1;
		}
	printf("是第%d天\n",days );
	return 0;
}

int sum_day(int month,int day)
{
 int day_tab[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
 int i;
 for(i=1;i<=month;i++)//这里书中错误❌
 	day=day+day_tab[i];
 return day;
}

int leap(int year)
{ int n=1;
  if(year%4!=0)
  	n=0;
  	else if(year%100!=0)
  		n=1;
  		  else if(year%400!=0)
  			n=0;
  		     else
  		     	n=1;
  return n;

}