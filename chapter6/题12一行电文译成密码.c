#include <stdio.h>
int main(int argc, char const *argv[])
{
	 char ch[80],tr[80];
	 //输入字符
	 printf("请输入字符\n");
	 gets(ch);
	 //输出字符
	 printf("输入的字符为：");
	 	printf("%s\n",ch );
	 //转换
	 int i;
	 for(i=0;i<=80&&ch[i]!='\0';i++)
	 {
	 	if(ch[i]>='A'&&ch[i]<='Z')
	 		tr[i]=155-ch[i];
	 	else if(ch[i]>='a'&&ch[i]<='z')
	 		tr[i]=219-ch[i];
	 	else
	 		tr[i]=ch[i];
	 }
	 printf("输出的字符为：");
	 printf("%s\n",tr);



	return 0;
}