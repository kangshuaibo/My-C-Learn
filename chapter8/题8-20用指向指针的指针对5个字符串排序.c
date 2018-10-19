#include <stdio.h>
#include <string.h>
#define LINE_MAX 20
int main()
{  
	void sort(char **p); 
	
	char **p,*pstr[5],str[5][LINE_MAX];//指向指针的指针 存放指针的数组 存放字符串的数组

    int i;
    for(i=0;i<5;i++)//将字符串首地址赋值给 指针数组
    	pstr[i]=str[i];


    //输入
    printf("please enter 5 string：\n");
    for(i=0;i<5;i++)
      scanf("%s",pstr[i]);


   //调用
   p=pstr;
   sort(p);

   printf("\nstring sorted:\n");
    for(i=0;i<5;i++)
    	printf("%s\n",pstr[i] );


	return 0;
}

void sort(char **p)
{
	int i,j;
	char *temp;
	for(i=0;i<5;i++)
		 {
		 	for(j=i;j<5;j++)
			{
				if( strcmp( *(p+i) , *(p+j) ) > 0 )
				{
					temp=*(p+i);
					*(p+i)=*(p+j);
					*(p+j)=temp;
				}
			}
	     }
}