#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE * in,*out;
	char ch,infile[10],outfile[10];
	printf("输入读入文件的名字：");
	 scanf("%s",infile);
	printf("输入读出文件的名字：");
	 scanf("%s",outfile);

	if( (in=fopen(infile,"r"))==NULL)
	{
		printf("无法打开文件\n");
		exit (0);
	}

	if( (out=fopen(outfile,"w"))==NULL )
	{
		printf("无法打开文件\n");
		exit (0);
	}

	while(!feof(in))//若文件未结束
	{
		ch=fgetc(in);
		fputc(ch,out);

		putchar(ch);//输出到屏幕
	}
	putchar(10);
	fclose(in);
	fclose(out);

	return 0;



}