//一个数恰好等于他的因子之和 为完数 6因子为1 2 3；
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n,i,s;
	for(n=2;n<=1000;n++)//从2开始挑选完数
	{	s=0;//用来求 因子的和
		for(i=1;i<n;i++)//从1开始尝试因子
         {
         	if(n%i==0)//被整除的都是因子
         		s=s+i;//求因子的和
         }
        if(s==n)
		 {
			printf("%d是完数,其因子为",s);//若相等则是完数 之后循环打印因子

		    for(i=1;i<n;i++)
	    	 {
    		  if(n%i==0)
    	      printf("%d ",i );
	         }
	         
		    printf("\n");
		 }

	}


	return 0;
}
