#include <stdio.h>
int main()
{
    //name为存放指针的一维数组 即指针数组
	char *name[]={"Fellow me","BASIC","Great Wall","FORTRAN","Computer disign"};
	char **p;

	int i;
	for (i = 0; i < 5; i++)
	{
		p=name + i;
		printf("%s\n",*p );
	}
	return 0;
}