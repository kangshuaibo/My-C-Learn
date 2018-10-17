#include <stdio.h>
int main()
{
	char a[]="I am a student";
	char b[20];

	int i;
	for(i=0;*(a+i)!='\0';i++)
		*(b+i)=*(a+i);
    *(b+i)='\0';
    printf("字符串a为：%s\n",a );
    printf("字符串b为：");//逐个输出b
    for(i=0;b[i]!='\0';i++)
    	printf("%c",b[i] );
    printf("\n");
    return 0;

}