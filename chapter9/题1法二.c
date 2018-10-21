#include <stdio.h>
struct
{
	int day;
	int month;
	int year;
}date;
int main(int argc, char const *argv[])
{
	int day_tab[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

	int days=0;
	printf("please enter year month day \n");
	 scanf("%d%d%d",&date.year,&date.month,&date.day);

	int i;
	for(i=1;i<date.month;i++)
      days=days+day_tab[i];
    days=days+date.day;      //😁这里注意加上零头

    int flag;
    if(date.year%4!=0)
    	flag=0;
    else if(date.year%100!=0)
    		flag=1;
    	 else if(date.year%400!=0)
    			 flag=0;
   			  else
    				flag=1;
    
    if( (flag==1) && (date.month>=3) )
    	days=days+1;

    printf("%d/%d is the %dth in %d\n",date.month,date.day,days,date.year );
	return 0;
}