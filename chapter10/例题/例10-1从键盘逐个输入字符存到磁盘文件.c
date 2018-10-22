#include<stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fp;
	char ch,filename[10];
	printf("请输入所用文件名\n");
	scanf("%s",filename);

	if( ( fp=fopen(filename,"w") )==NULL)//打开一个文件 没有就创建一个
	{
		printf("无法打开文件\n");
		exit(0);
	}

	ch=getchar();//用来接受最后的回车
	printf("请输入一个准备存到磁盘上的字符串（以#结束）\n");
	ch=getchar();//接受第一个字符
	while(ch!='#')
	{
		fputc(ch,fp);//😄向磁盘输出一个字符 关键
		putchar(ch);//现实到屏幕上

		ch=getchar();//再接受一个字符
	}

	fclose(fp);
	putchar(10);
	return 0;
}//注意生成的文件在 用户/用户名/