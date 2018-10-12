#include <stdio.h>
int letter=0,digit=0,space=0,other=0;//定义全局变量
int main()
{ 
	char text[80];
	void count(char string[]);//声明
	//输入
	printf("请输入字符串:%s",text );
	gets(text);
	//调用函数
	count(text);
	//输出
	printf("字母:%d\n数字:%d\n空格:%d\n其他:%d\n",letter,digit,space,other);



return 0;
}

void count(char string[])
{ int i;
  for(i=0;string[i]!='\0';i++)
  {
  	if(  ((string[i]<='Z') && (string[i]>='A')) || ((string[i]<='z') && (string[i]>='a'))  )
  		letter++;
  	else if(string[i]<='9'&&string[i]>='0')
  		digit++;
  	else if(string[i]==' ')
  		space++;
  	else
  		other++;


  }
}