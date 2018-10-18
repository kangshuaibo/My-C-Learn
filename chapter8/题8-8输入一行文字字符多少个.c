#include <stdio.h>
int main(int argc, char const *argv[])
{
	int upper=0,lower=0,digit=0,space=0,other=0;
	char *p,s[20];
	//输入
	int i=0;
	while( ( s[i]=getchar() )!='\n' )
		i++;
	p=s;
	//判断
	while(*p!='\n')
	{
      if( ('A'<=*p)&&(*p<='Z') )
      	++upper;
      else if( ('a'<=*p)&&(*p<='z') )
      	++lower;
      else if( *p==' ')
      	++space;
      else if( (*p<='9')&&(*p>='0') )
      	++digit;
      else ++other;

      p++;
	}

	printf("大写：%d\n小写：%d\n空格%d\n数字%d\n其他%d\n",upper,lower,space,digit,other );
	return 0;
}