//变成其后第四个字母
/*#include<stdio.h>
int main(int argc, char const *argv[])
{
	char c;
	c=getchar();//语句一
	while(c!='\n')//语句二
	{
	if((c>='A'&&c<='Z')||(c>='a'&&c<='z'))
	  {if((c>='W'&&c<='Z')||(c>='w'&&c<='z'))
	 	c=c-22;
	  else
	 	c=c+4;
      }
      printf("%c",c);
      c=getchar();//语句三
	 
	}
	printf("\n");

	return 0;
}	
*/
//法二
#include <stdio.h>
int main(int argc, char const *argv[])
{
	char c;
	while((c=getchar())!='\n')
	{
		if((c<='z'&&c>='a')||(c<='Z'&&c>='A'))
			{c=c+4;
		  if((c<=('z'+4)&&c>='z')||(c>='Z'&&c<='Z'+4))
		  	c=c-26;}
		  
    printf("%c",c );
	}
	printf("\n");
	return 0;
}	