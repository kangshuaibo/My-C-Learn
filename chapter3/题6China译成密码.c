//将China译成密码，规则：用字母表后面第四个代替 如A替换成E(ABCDEFG..)
//用两种方法输出
#include <stdio.h>
int main(){
	char c1='C',c2='h',c3='i',c4='n',c5='a';
	c1=c1+4;
	c2=c2+4;
	c3=c3+4;
	c4=c4+4;
	c5=c5+4;
	printf("password is %c%c%c%c%c\n",c1,c2,c3,c4,c5);
	putchar(c1);
	putchar(c2);
	putchar(c3);
	putchar(c4);
	putchar(c5);

}