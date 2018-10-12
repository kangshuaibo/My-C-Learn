//输入一个字符判断是否为大写字母 若不是转换为大写
#include <stdio.h>
int main(){
	char ch;
	scanf("%c",&ch);
	ch=(ch>='A'&&ch<='Z')?(ch+32):ch;
	printf("%c\n",ch);
	return 0;

}