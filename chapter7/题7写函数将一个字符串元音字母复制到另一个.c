#include<stdio.h>
int main()
{
	char str1[100],string_vowel[100];
	void cpy_vowal(char string[],char string_vowel[]);//声明
	 //输入字符串
    printf("请输入字符串：");
     gets(str1);
     //调用函数
    cpy_vowal(str1,string_vowel);
    printf("字符串中元音字母为：%s",string_vowel);
    printf("\n");
	return 0;
}
void cpy_vowal(char string[],char string_vowel[])
{  
	int i,j=0;
  for(i=0;string[i]!='\0';i++)
  	{if(string[i]=='A'||string[i]=='a'||
  	   string[i]=='E'||string[i]=='e'||
  	   string[i]=='I'||string[i]=='i'||
  	   string[i]=='O'||string[i]=='o'||
  	   string[i]=='U'||string[i]=='u')
  		{string_vowel[j]=string[i];
  	     j++;}
  	 }
   string_vowel[j]='\0';
}