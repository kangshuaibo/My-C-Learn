#include<stdio.h>
int main()
{
	FILE*fp1,*fp2;
	fp1=fopen("file1.dat","r");
	fp2=fopen("file2.dat","w");
	while(!feof(fp1))
		putchar(getc(fp1));//读到屏幕
	putchar(10);
	rewind(fp1);//返回开头
	while(!feof(fp1))
		putc(getc(fp1),fp2);//读并输出到饭f2
	fclose(fp1);
	fclose(fp2);
	return 0;
}