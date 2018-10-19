#include <stdio.h>
int main()
{
	char *month_name[13]={  "illegal month",
						"January","February","March",
						"April","May","June","july",
						"August","September","Ocotber",
						"November","December"};//❌一维数组 徐定义长度啊！！！！
	int n;
	printf("please enter a month\n");
	 scanf("%d",&n);
	if( (n<=12)&&(n>=1) )
		printf("It is %s \n",*(month_name+n));
	else
		printf("error!\n");

return 0;

}