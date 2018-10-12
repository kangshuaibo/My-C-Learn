#include <stdio.h>
#include <string.h>
#define N 10
int main(int argc, char const *argv[])
{   char str[N];
	void sort(char string[]);//声明
	//输入数组及判断合法
	int i,flag;
	for(flag=1;flag==1;)
	{
		printf("请输入数组：");
		scanf("%s",str);
		if(strlen(str)>N)
			printf("输入太长请重新输入：\n");
		else
			flag=0;
	}
	//调用函数
	sort(str);
	//输出排序后的字符串
	for(i=0;i<N;i++)
		printf("%c",str[i] );
	printf("\n");


	return 0;
}

void sort(char string[])
{
  int i,j;
  char t;
  for(i=0;i<N;i++)
   for(j=0;(j<N-i)&&(string[j]!='\0');j++)
   	if(string[j]<string[j-1])
   	{
   		t=string[j];
   	    string[j]=string[j-1];
   	    string[j-1]=t;
   	}
   		
}
