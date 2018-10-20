#include <stdio.h>
#include <stdlib.h>
#define LEN sizeof(struct Student)

struct Student 
{
	long num;
	float score;
	struct Student *next;
};

int n;

struct Student *creat(void)//返回 结构体类型 函数入口地址的 指针变量
{
    struct Student *head;
	struct Student *p1,*p2;
	n=0;
	p1=p2=(struct Student*)malloc(LEN);
	scanf("%ld%f",&p1->num,&p1->score);

	head=NULL;
	while(p1->num!=0) //输入0结束
	{
		n=n+1;
		if(n==1)
			head=p1;     //初始化头节点 头节点先指向第一个
		else
			p2->next=p1;//尾插 链接p1
		p2=p1;          //p2标记下一个节点 为再后续插入节点做标记
		p1=(struct Student*)malloc(LEN);
		scanf("%ld %f",&p1->num,&p1->score);
	}
	p2->next=NULL;
	return head;
}

int main()
{//这里居然没有函数声明！！！！！！！谭浩强这书真的可以了！！他还是个考点。。。。什么时候不需要函数声明。。。当函数定义在主函数之前时。。。。。。。
 //struct Student *creat(void);//声明
 struct Student *pt;
 pt=creat();
 printf("num=%ldscore=%5.1f\n",pt->num,pt->score );
 return 0;
}
	
