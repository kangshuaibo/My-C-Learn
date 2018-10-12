#include <stdio.h>
#include <string.h>//用到了字符串函数strcpy strcmp要加这个头文件
int main(int argc, char const *argv[])
{
	char str[3][20];
	char string[20];
	int i;
	for(i=0;i<3;i++)//每一个enter输入一个字符串
	{
		gets(str[i]);//从输入 传递到数组中存储 参数为存储的位置
	}
	
	if(strcmp(str[0],str[1])>0)
		strcpy(string,str[0]);
		else
		strcpy(string,str[1]);

	if(strcmp(string,str[2])<0)
		strcpy(string,str[2]);
	
   printf("最大的字符串为%s\n",string );


	return 0;
}