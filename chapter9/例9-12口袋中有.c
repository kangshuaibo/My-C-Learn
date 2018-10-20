//口袋中有红 黄 蓝 白 黑5种颜色的球若干个 每次从口袋中先后取出3个球问 得到3种不同颜色的球的可能取法，输出每种排列情况
#include <stdio.h>
int main()
{
	enum Color {red,yellow,blue,white,black};
	enum Color i,j,k,pri;
	int n,loop;
	n=0;
	for(i=red;i<=black;i++)
		for(j=red;j<=black;j++)
			if(i!=j)          //条件1
			{
	   			for(k=red;k<=black;k++)
	  				if( (k!=i) && (k!=j) )   //条件2
			         {
				      n=n+1;
				      printf("%-4d",n);//都满足循环输出
				      	for(loop=1;loop<=3;loop++)
				      	 {
				      		switch(loop)
				      		{
				      			case 1:pri=i;break;
				      			case 2:pri=j;break;
				      			case 3:pri=k;break;
				      			default:break;
				      		}
				      		switch(pri)
				      		{
				      			case red:printf("%-10s","red");break;
				      			case yellow:printf("%-10s","yellow");break;
				      			case blue:printf("%-10s","blue");break;
				      			case white:printf("%-10s","white");break;
				      			case black:printf("%-10s","black");break;
				      			default:break;
				      		}
				      	}
				      }printf("\n");
			}
printf("\ntotal:%d\n",n);

return 0;
}