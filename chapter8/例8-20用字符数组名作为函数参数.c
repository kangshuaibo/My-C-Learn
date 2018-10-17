//*********************字符数组名 做函数参数
#include <stdio.h>
int main()
{
	void copy_string(char form[],char to[]);//声明

	char a[]="I am a teacher";
    char b[]="You are a student.";

    printf("字符串a：%s\n字符串b:%s\n",a,b);
    printf("复制字符串a到b：\n");

    copy_string(a,b);
    printf("字符串a：%s\n字符串b:%s\n",a,b);
    return 0;

}
void copy_string(char from[],char to[])//形参为字符数组
{
	int i=0;
	while(from[i]!='\0')
     {
     	to[i]=from[i];
     	i++;

     }
     to[i]='\0';
}











//********************字符型指针变量 做 实参

#include <stdio.h>
int main()
{
	void copy_string(char from[],to[]);//声明

   	char a[]="I am a teacher";
    char b[]="You are a student.";

    char *from=a;//字符型指针变量 指向 a数组首元素
    char *to=b;
    //输出原来数组
    printf("字符串a：%s\n字符串b:%s\n",a,b);
    printf("复制字符串a到b：\n");

    //调用
    copy_string(from,to);

    //输出
    printf("字符串a：%s\n字符串b:%s\n",a,b);

}
void copy_string(char from[],char to[])//形参为字符数组
{
	int i=0;
	while(from[i]!='\0')
     {
     	to[i]=from[i];
     	i++;

     }
     to[i]='\0';
}










// ******************字符型指针变量 做 实参 和 形参
#include <stdio.h>
int main()
{
	void copy_string(char *from,char *to);//声明

	char *a="I am a teacher";
	char b[]="You are a student";

	char *p=b;

	 //输出原来数组
    printf("字符串a：%s\n字符串b:%s\n",a,b);
    printf("复制字符串a到b：\n");
    //调用
    copy_string(from,to)

    //输出
      printf("字符串a：%s\n字符串b:%s\n",a,b);
      return 0;

}

void copy_string(char *from,char *to)//指针变量做形参
{
	for(;*from!='\0';from++,to++)
	{
		*to=*from;
	}
	*to = '\0';
}

