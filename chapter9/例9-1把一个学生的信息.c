#include <stdio.h>
int main()
{
	struct Student   //建立结构体类型为 struct Student型
	{
		long int num;
		char name[20];
		char sex;
		char addr[20];
	}a={10101,"Li Lin",'M',"123 Beijing Road"};//定义结构体变量为 a（形式相当于int a ====> struct Student a =====> 
	                  							//                 struct Student是一个整体 是一个类型 如int、float）

	printf("  No.%ld\n  name:%s\n  sex:%c\n  address:%s\n",a.num,a.name,a.sex,a.addr );//只能调用结构体成员
	return 0;
}