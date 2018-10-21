#include <stdio.h>
struct y_m_d
{
	int year;
	int month;
	int day;
	
}date;
int main(int argc, char const *argv[])
{
	int days(int year,int month,int day);//声明
	int day_sum;

	printf("please enter  year/month/day\n");
	 scanf("%d%d%d",&date.year,&date.month,&date.day);
    //调用
	day_sum=days(date.year,date.month,date.day);

	printf("%d/%d is the %dth day in %d\n",date.month,date.day,day_sum,date.year );

	return 0;
}

int days(int year,int month,int day)
{
	int day_tab[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int days;
	int i;
	for(i=0;i<month;i++)
	  days=days+day_tab[i];
	days=days+day;

	int flag;
	if(year%4!=0)
		 flag=0;
	else if(year%100!=0)
		      flag=1;
		 else if(year%400!=0)
		 	      flag=0;
		       else
		    	     flag=1;

	if(flag==1 && month>=3)
		days=days+1;

	return days;

}