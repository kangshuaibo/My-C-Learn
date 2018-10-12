#include <stdio.h>
int main(int argc, char const *argv[])
{
	char c;
	int letter=0,space=0,digit=0,other=0;
	while((c=getchar())!='\n')
		{
			if((c<='Z'&&c>='A')||(c<='z'&&c>='a'))
			letter++;
		else if(c==' ')
			space++;
		else if(c<='9'&&c>='0')
			digit++;
		else
			other++;
	    }

		printf("字母有%d个\n空格有%d个\n数字有%d个\n其他字符%d个\n",letter,space,digit,other);
	return 0;
}