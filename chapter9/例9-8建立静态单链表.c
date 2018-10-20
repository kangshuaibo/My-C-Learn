#include <stdio.h>
struct Student
{
	int num;
	float score;
	struct Student *next; //next为结构体类型 指针变量
};

int main()
{
	struct Student a,b,c,*head,*p;
	a.num=10101;a.score=89.5;
	b.num=10103;b.score=90;
	c.num=10107;c.score=85;

	head=&a;
	a.next=&b;
	b.next=&c;
	c.next=NULL;

	p=head;
	while(p!=NULL)
	{
		printf("%1d%5.1f\n",p->num,p->score );
		p=p->next;
	}
return 0;
}