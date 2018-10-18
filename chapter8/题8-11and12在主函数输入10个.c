//在主函数中输入10个等长的字符串 用另一个函数对他排序 用主函数输出

/*
//8-11********************用字符型二维数组*************
#include <stdio.h>
#include <string.h>
int main ()
{
	void sort(char s[][6]);
    char str[10][6];

    int i;
    printf("input 10 trings\n");
    for(i=0;i<10;i++)
    	scanf("%s",str[i]);
    //调用
    sort(str);

    printf("Now,the sequence:\n");
    for(i=0;i<10;i++)
    	printf("%s\n",str[i] );
    return 0;
}
void sort(char s[10][6])
{
	int i,j;
	char *p,temp[10];
	p=temp;
	for(i=0;i<9;i++)
		for(j=0;j<9-i;j++)   //冒泡排序
			if(strcmp(s[j],s[j+1])>0)
			{
				strcpy(p,s[j]);
				strcpy(s[j],s[j+1]);
				strcpy(s[j+1],p);
			}

}
*/











//8-11********************用指向一位数组的指针做函数参数
/*
#include <stdio.h>
#include <string.h>
int main()
{
  void sort(char (*p)[6]);
  
  char str[10][6];
  char (*p)[6];      //指向一维数组的指针变量

   int i;
   printf("input 10 trings\n");
   for(i=0;i<10;i++)
     scanf("%s",str[i]);

   p=str;
   sort(p);

       printf("Now,the sequence:\n");
    for(i=0;i<10;i++)
    	printf("%s\n",str[i] );
    return 0;

}
void sort(char (*s)[6])
{
	int i,j;
	char temp[6],*p=temp;
	p=temp;
	for(i=0;i<9;i++)
		for(j=0;j<9-i;j++)   //冒泡排序
			if(strcmp(s[j],s[j+1])>0)
			{
				strcpy(p,s[j]);
				strcpy(s[j],s[j+1]);
				strcpy(s[j+1],p);
			}

}
*/

//8-12*******************用指针数组 字符串不等长

#include <stdio.h>
#include<string.h>
int main()
{
	void sort(char *[]);//声明

	char *p[10]; //存放指针的数组
	char str[10][20];//存放字符创 让数组里的指针指向

	int i;
	for(i=0;i<10;i++)
	  p[i]=str[i];

	printf("输入字符串\n");
	 for(i=0;i<10;i++)
	 	scanf("%s",str[i]);

    sort(p);//传送指针数组的起始地址（这个数组存放了一串指针 传第一个）

    printf("Now,your string:\n");
    for(i=0;i<10;i++)
    	printf("%s\n",str[i] );
return 0;
}

void sort(char *s[])//收到指针数组的起始地址
{
	int i,j;
	char *temp;
	for(i=0;i<9;i++)
		for(j=0;j<9-1;j++)
          if( strcmp(*(s+j),*(s+j+1))>0 )
          {
          	temp=*(s+j);
          	*(s+j)=*(s+j+1);
          	*(s+j+1)=temp;
		  }
}