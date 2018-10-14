#include <stdio.h>
int main(int argc, char const *argv[])
{
	int number;

	void convert(int n);//声明

    //输入字符串
	printf("请输入数字串:\n");
	scanf("%d",&number);

    //输出
	printf("转换为字符串为：\n");
		if(number<0)
		{
			putchar('-');putchar(' ');
			number=-number;
		}
	//调用
	convert(number);
    printf("\n");


	return 0;
}

void convert(int n)
{
	int i;
	if( (i=n/10)!=0 )
	convert(i);     //递归
    putchar(n%10+'0'); //0的ASCII为48 ，即转换为数字的字符了
    putchar(32);//输出一个空格
}