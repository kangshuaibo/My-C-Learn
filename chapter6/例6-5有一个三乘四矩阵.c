#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a[3][4]={{50,52,3,4},{53,30,80,6},{-10,90,-5,2}};
	int max;
	max=a[0][0];
	int i,j,row,colum;
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
		{
			if(a[i][j]>max)
			{
			   max=a[i][j];
		       row=i;//这里的行号不是真实的行号 下标从0开始
		       colum=j;
		    }
		}
	printf("%d\n",max );
	printf("行列号a[%d][%d]\n",row,colum);
	return 0;
}