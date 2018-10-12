#include <stdio.h>
int main()
{
	char s1[100],s2[100],s[100];
	void link(char str1[],char str2[],char string[]);//声明
	 printf("输入字符串s1\n");
	 scanf("%s",s1);
	 printf("输入字符串s2\n");
	 scanf("%s",s2);
	 //调用函数
	 link(s1,s2,s);
	 printf("连接后的字符串为：\n");
	 printf("%s\n",s);
    return 0;
}
void link(char str1[],char str2[],char string[])
{
	int i,j;
	for(i=0;str1[i]!='\0';i++)
		string[i]=str1[i];
	for(j=0;str2[j]!='\0';j++)
		string[i+j]=str2[j];
    string[i+j]='\0';


}