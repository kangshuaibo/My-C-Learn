#include <stdio.h>
int main(int argc, char const *argv[])
{
	void print_start();
	void print_word();//声明

	//调用函数
	print_start();
	print_word();
	print_start();

	return 0;
}

void print_start()
{
	printf("***************\n");
}

void print_word()
{
	printf("how do you do?\n");
}