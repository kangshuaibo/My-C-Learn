#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	char s1[80],s2[80];
	printf("请输入s2:");
	scanf("%s",s2);
	int i;
	for(i=0;i<=strlen(s2);i++)
		s1[i]=s2[i];
	printf("s1为：");
	printf("%s\n",s1 );


	return 0;
}