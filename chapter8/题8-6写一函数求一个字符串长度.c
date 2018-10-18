#include <stdio.h>
int main()
{
	int length(char *p);//声明

	int len;
    char str[20];
    printf("input string:\n");
     scanf("%s",str);

    len=length(str);

    printf("the length is %d\n",len );
   
   return 0;
}

int length(char *p)
{   int i=0;
	while(*p!='\0')
	{
		p++;
	    i++;
	}
	return i;
}