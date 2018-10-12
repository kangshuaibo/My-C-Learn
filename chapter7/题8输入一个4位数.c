#include <stdio.h>
#include <string.h>
int main()
{
   char str[80];
   void insert(char string[]);//声明
   //输入
   printf("请输入4位数：\n");
    scanf("%s",str);
   //调用函数
    insert(str);
    //输出
    printf("转换后的数组为：%s\n", str);

	return 0;
}
void insert(char string[])
{
  int i;
  for(i=strlen(string);i>0;i--)//从原数组最后一个真实字符移动 每个往后移到2*i 然后前面叉一个空格
  {
  	string[2*i]=string[i];
  	string[2*i-1]=' ';
  }
}