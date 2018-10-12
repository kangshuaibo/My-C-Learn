#include <stdio.h>

int main(){
	char grade;
	printf("输入你的等级 大写:\n");
	scanf("%c",&grade);
	printf("Your score:\n");
	switch(grade)
	{
		case'A':printf("85~100\n");break;
		case'B':printf("70~84\n");break;
		case'C':printf("69~60\n");break;
		case'D':printf("<60\n");break;
		default:printf("输入错误\n");
	}
}