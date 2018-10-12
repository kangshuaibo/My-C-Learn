#include <stdio.h>
int main()
{
	int max();//没有用到参数传递 直接调用外部变量
	extern int A,B,C;//引用下方外部变量
	printf("请输入三个数");
	scanf("%d%d%d",&A,&B,&C);
	printf("%d\n",max() );
	return 0;

}

int A,B,C;

int max(){
	int m;
	m=A>B?A:B;//直接调用外部变量abc
	if(m<C)
		m=C;
	return m;
}