#include <stdio.h>
int main()
{
	int a=100,b=10;
	int *pointer_1,*pointer_2;//定义 指针变量 pointer_1和指针变量pointer_2。。。注意指针变量的概念 指针变量没有*号

	pointer_1=&a;//指针变量得地址 得谁地址指向谁
	pointer_1=&b;

	printf("a=%d,b=%d\n",a,b);
	printf("*pointer_1=%d,*pointer_2=%d\n",a,b);//这里的*pinter_1表示指针变量*pointer_1所指向的变量即 也就是a
    //要注意定义和引用时*pointer_1的区别

  return 0;

}