#include<stdio.h>
#include <string.h>
int main()
{
	void cpystr(char *,char *,int );//声明

	int m;
	char str1[20],str2[20];  

	printf("input string:\n");
	 gets(str1);

	printf("which character that begin to copy?\n");
	scanf("%d",&m);
    //调用
	if(strlen(str1)<m)
		printf("error\n");
	else
	{
		cpystr(str1,str2,m);
		printf("result:%s\n",str2);
	}

}
void cpystr(char *p1,char* p2,int m)
{
	int n;
	n=0;
	while(n<m-1)
	{
		n++;
		p1++;
	}
	while(*p1!='\0')
	{
		*p2=*p1;
		p1++;
		p2++;
	}
	*p2='\0';
}

