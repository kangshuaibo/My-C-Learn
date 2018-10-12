#include <stdio.h>
int main(int argc, char const *argv[])
{
	char s1[80],s2[40];
    printf("请输入字符串s1:");
    scanf("%s",s1);
    printf("请输入字符串s2:");
    scanf("%s",s2);
    int i=0,j=0;
    while(s1[i]!='\0')//获取i最后一个下标
    {
  		i++;
    }
    while(s2[i]!='\0')
    {
    	s1[i++]=s2[j++];
    }
    s1[i]='\0';
    printf("%s\n",s1 );
	return 0;
}