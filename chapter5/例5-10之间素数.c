#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
	int i,n,k,m=0;
	for(n=101;n<=200;n=n+2)
	{   
		k=sqrt(n);
		for(i=2;i<=k;i++)
			if(n%i==0)
				break;
			if(i>=k+1)//因完成循环后 i+1 需要用等式右方需要加1来抵消
				{
					printf("%d\t",n);
			        m=m+1;//记录输出个数
		        }
		   if(m%10==0)printf("\n");//换行 每输出10个 换换行    
	} 

	printf("\n");
	return 0;
}