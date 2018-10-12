//碾转相除法求最大公约数 m*n除p为最小公倍数
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int m,n,temp;
	scanf("%d%d",&m,&n);
	if(m>n)
	{
      temp=m;
      m=n;
      n=temp;
	}int p=m*n;
	int r=0;
	while(m!=0)
	{
		r=n%m;//m为小的哪个数
		n=m;
		m=r;
	}
	
	printf("最大公约数%d\n",n );
	printf("最小公倍数%d\n",p/n );
	return 0;
}
