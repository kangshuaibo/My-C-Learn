#include <stdio.h>
int main()
{
	int s1=0,s2=0;
	double s3=0;
	double k;

	/*double t;
	int k;*/

	for(k=1;k<=100;k++)
	  {s1=s1+k;}
    for(k=1;k<=50;k++)
      {s2=s2+k*k;}
    for(k=1;k<=10;k++)
   	  {  
   	  	s3=s3+1/k;//这里的k必须为 double不能为int 因为用1除了还存在k中
   	  	//printf("%lf\n",t=1/k);//测试k,若k定义为整型 则小数部分没有了

   	  }
printf("%d %d %f\n",s1,s2,s3 );
printf("%f\n",s1+s2+s3 );

}