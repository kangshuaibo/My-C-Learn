
//有一个字符串内有若干个字符 输入一个字符删去
#include <stdio.h>
#include "file2.c"
#include "file3.c"
#include "file4.c"
int main()
{ int n;
  extern void enter_string(char str[]);
  extern void delete_string(char str[],char ch);
  extern void print_string(char str[]);

  char c,str[80];
  //调用函数
  printf("请输入字符串：");
  enter_string(str);
  printf("请输入要删除的字符:");
  scanf("%c",&c);
  delete_string(str,c);
  printf("修改后的字符串为：");
  print_string(str);
  
  return 0;
}
