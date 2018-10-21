#include <stdio.h>
struct student
{
	long num;
	float score;
	struct *next;
};

int n;

struct student *insert(struct student *head,struct student *stud)//stud 为指针变量 为要插入的节点
{
	struct student *p1,*p2,*p0;
	p1=head;
	p0=stud;

	if(head==NULL)
		head=p0;
	    p0->next=NULL;
    else
    {
    	while(p0->num > p1->num && p1->next!=NULL) //往后找 找呀找 若往后找居然是第一个节点
    	{
    		p2=p1;
    		p1=p1->next;
    	}
    	if(p0->num < p1->num)//若插入位置为第一个节点之前
    	{
    		if(head==p1)
    			head=p0;//直接赋值给h h的值改变了
    		else
    			p2->next=p0;

    		p0->next=p1;

    	}
    	else                 //插入位置为尾节点
    	{
    		p1->next=p0;
    		p0->next=NULL;
    	}
    }
}