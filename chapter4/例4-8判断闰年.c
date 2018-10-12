#include<stdio.h>
int main(){
	int year,leap;
	scanf("%d",&year);
	if (year%4!==0)//不能被4整除一定不是 如2013
		leap=0;
	else
		if(year%100!==0)//能被4整除 不能被100整除是闰年 如2008
			leap=1;
		else
			if(year%400!==0)//能被4整除 能被100整除 不能被400整除 
				leap=0;
			else
				leap=1;

       if(leap==1)
			printf("%d是闰年\n",year);
		else
			printf("%d不是闰年\n", year);

	 
}
