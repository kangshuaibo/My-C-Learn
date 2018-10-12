#include <stdio.h>
int main(int argc, char const *argv[])
{   char A,B,C;
	int n;
	void hanoi(int n,char one,char two,char three);//声明
	printf("请输入几层：");
	scanf("%d",&n);
	hanoi(n,'A','B','C');
	return 0;
}
//函数模拟搬运操作
void hanoi(int n,char one,char two,char three)
{
  void move(char x,char y);//声明

  if(n==1)
  	move(one,three);
  else
  {
    hanoi(n-1,one,three,two);
    move(one,three);
    hanoi(n-1,two,one,three);
  }

}

//模拟将一个盘子搬过来
void move(char x,char y)
{
  printf("%c-->%c\n",x,y );
}