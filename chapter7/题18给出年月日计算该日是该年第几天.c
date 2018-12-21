#include <stdio.h>
int main(int argc, char const *argv[])
{
	int year,month,day,days;

	int sum_day(int month,int day);//声明
	int leap(int year);
    
    printf("请输入年月日：\n");		//输入
	scanf("%d%d%d",&year,&month,&day);

	days=sum_day(month,day);	//days为第几天 闰年需要加1（除1、2月）
		if( leap(year)&&month>=3 )
		{
			days=days+1;
		}
	printf("是第%d天\n",days );



	return 0;
}

int sum_day(int month,int day)	//计算每个月份的和 加上本月的天
{
 int day_tab[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

 int i;
 for(i=1;i<=month;i++)//这里书中错误❌。 
 	day=day+day_tab[i];	//此处为关键😄如6月18日为前六个月的天数相加 再加上18

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