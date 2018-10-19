#include <stdio.h>
#define NEWSIZE 1000
char newbuf[NEWSIZE];//开辟足够大 字符数组
char *newp=newbuf;//指针变量得到数组首元素地址

char *new(int n)//使得newp指向 下一个开头（即本区域末尾）
{
	if(newp+n<=newbuf+NEWSIZE)//检查开辟的数组是否够用 
	{
		newp=newp+n;//指向要开辟区末尾 指向了下一片未分配的开头,若再次调用 从这里开始分配
		return(newp-n); //返回新开辟的首元素的地址
	}
	else
		return NULL;
}

void free(char *p)//使得newp恢复为p
{
	if(p>=newbuf && p<newbuf+NEWSIZE)//检查是否在已经开辟的范围内
		newp=p;
}


//若调用

pt=new(n);

free(pt);