#include <stdio.h>
struct student
{
	long num;
	float score;
	struct student *next;
};

int n;

struct student *del(struct student *head,long num)//num为要删除的节点号
{struct student *p1,*p2;
	if(head==NULL)
	{
		printf("linklist is null!\n");
		return head;
	}

	 p1=head;
	 while(num!=p1->num && p1->next!=NULL)  //😆没找到
	 {
	 	p2=p1;
	 	p1=p1->next;
	 }

	 if(num==p1->num)                       //😤找到了     (是第一个节点or不是第一个节点)
	 {
       if(p1==head)
       	head=p1->next;     //摘除p1 head为直接赋值
       else
       	p2->next=p1->next;//删除p1

       printf("delete%ld",num );
       n=n-1;
	 }

	 else 
	 	printf("%ld is not found",num );


	 return head;  
}