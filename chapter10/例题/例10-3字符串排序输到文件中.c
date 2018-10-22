#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	FILE*fp;
	char str[3][10],temp[10];
	int i,j,k,n=3;

	printf("enter strings:\n");
	for(i=0;i<n;i++)
	{
		gets(str[i]);
	}
    //选择排序
	for(i=0;i<n-1;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
			if(strcmp(str[k],str[j])>0)
				k=j;
			if(k!=i)
			{
				strcpy(temp,str[k]);
				strcpy(str[k],str[i]);
				strcpy(str[i],temp);

			}

	}
	if(( fp=fopen("string.dat","w") )==NULL)
	{
		printf("can't open file!\n");
		exit(0);
	}
	printf("\nThe new squence:\n");
	for(i=0;i<n;i++)
	{
		fputs(str[i],fp);
		fputs("\n",fp);
		printf("%s\n",str[i] );
	}
	return 0;
}