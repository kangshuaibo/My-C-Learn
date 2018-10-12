#include <stdio.h>
int main(int argc, char const *argv[])
{   int n;
	int a[15][15];
	//判断输入合法
	int p=1;
	while(p==1)
	{   printf("请输入是几阶阵 n=");
        scanf("%d",&n);
		if(n<=15&&n!=0&&n%2!=0)
			p=0;
		
	}
	//初始化
	int i,j;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			a[i][j]=0;
	//建立魔方阵
	int k;
	j=n/2+1;
	a[1][j]=1;
	for(k=2;k<=n*n;k++)
	{
		i=i-1;
		j=j+1;
		if(i<1&&j>n)
		{
			i=i+2;
			j=j-1;
		}
		else
		{
			if(i<1)i=n;//如上一个i=1 下一个i=0
			if(j>n)j=1;//如上一个i=n 下一个为n+1(题中给若上一个数在第一行第n列)

		}
		if(a[i][j]==0)
		a[i][j]=k;
	    else
	    {
	    	i=i+2;
	    	j=j-1;
	    	a[i][j]=k;
	    }
	}
	//输出
	for(i=1;i<=n;i++)
	{
			for(j=1;j<=n;j++)
			{
	        printf("%d ",a[i][j]);
	        }
	  printf("\n");
	}

	return 0;
}