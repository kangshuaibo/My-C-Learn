#include <stdio.h>
int main(){
	int a,b;
	float x,y;
	char c1,c2;

	scanf("a=%d b=%d",&a,&b);//输入格式为a=3 b=7回车
	scanf("%f %e",&x,&y);//直接输入对应数字中间有空格
	scanf("%c%c",&c1,&c2);//直接输入字符 无需空格

	printf("a=%d,b=%d,x=%f,y=%f,c1=%c,c2=%c\n",a,b,x,y,c1,c2);
	return 0;

}