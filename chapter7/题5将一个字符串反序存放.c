#include <stdio.h>
#include <string.h>
int main()
{
	char str[100];
	void inverse(char str[]);//声明
	//输入字符串
	printf("请输入字符串：");
	scanf("%s",str);
	//调用
	inverse(str);
	//
	printf("字符串反序为：%s\n",str);
	return 0;
}

void inverse(char str[])
{   int t;
	int i,j;
	for(i=0,j=strlen(str);i<strlen(str)/2;i++,j--)
	{
	   t=str[i];
	   str[i]=str[j-1];
	   str[j-1]=t;
	}

}