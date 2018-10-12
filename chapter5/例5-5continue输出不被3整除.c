//要求输出100到200之间不能被3整除的数
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int i;
	for(i=100;i<=200;i++)
	{
		if(i%3==0)
			continue;//能被3整除的跳出本次循环 不打印，跳到循环体末尾然后i++
		else 
			printf("%d\t",i );//不能被3整除的 打印 

			
	}
	
    printf("\n");//程序框换行
	return 0;
}