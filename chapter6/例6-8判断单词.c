#include <stdio.h>
int main(int argc, char const *argv[])
{
	char string[81];
	gets(string);
	char c;
    int num=1,word;
	int i;
	for(i=0;(c=string[i])!='\0';i++)//数组中逐个字符排查
      {
      	if(c==' ')//当前字符为空格 不是单词
      	 word=0;
        else if(word==0)//当前非空格 如果前一个为空格（word==0）是单词
      	{
         word=1;
         num++;
        }

   }
   printf("一共有%d个单词\n", num);
	return 0;
}