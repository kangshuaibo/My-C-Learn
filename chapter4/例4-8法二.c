//根据ns图
#include <stdio.h>
int main(){
	int year,leap;
	scanf("%d",&year);
	if(year%4==0)
		if (year%100==0)
		{
			if(year%400==0)
				leap=1;
			else
				leap=0;
		}
		else
			leap=1;

	else
		leap=0;


	if(leap)
		printf("是闰年\n");
	else
		printf("不是闰年\n");
	return 0;

}