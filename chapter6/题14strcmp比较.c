#include <stdio.h>
int main(int argc, char const *argv[])
{
	char s1[80],s2[80];
	printf("请输入s1");
	gets(s1);
	printf("请输入s2");
	gets(s2);
    int i=0,resu;
	while(s1[i]==s2[i]&&s1[i]!='\0')
		{
			i++;
		}
	if(s1[i]=='\0'&&s2[i]=='\0')
		resu=0;
	else
		resu=s1[i]-s2[i];
	printf("%d\n",resu );
	return 0;
}