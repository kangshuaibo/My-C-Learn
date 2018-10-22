#include <stdio.h>
#include <stdlib.h>
#define LEN sizeof(struct student)

struct student
{
 long num;
 int score;
 struct student *next;
};
struct student lista,listb;

int n,sum=0;

int main()
{
    struct student *creat();
    struct student *insert(struct student *,struct student *);
    void print(struct student *);

    struct student *ahead,*bhead,*abh;

    printf("input a list a\n");
     ahead=creat();
     print(ahead);
    sum=sum+n;

    printf("input a list b\n");
     bhead=creat();
     print(bhead);
    sum=sum+n;

    abh=insert(ahead,bhead);
    print(abh);


	return 0;
}

struct student *creat(void)
{   struct student *head,*p1,*p2;
	n=0;
	p1=p2=(struct student *)malloc(LEN);
	printf("input the information of student No./score(stop by enter 0):\n");
	scanf("%ld %d",&p1->num,&p1->score);
	head=NULL;
	while(p1->num!=0)//头滞空 创建表表 n控制 两情况
	{
		n=n+1;
		if(n==1)
			head=p1;
		else
			p2->next=p1;
		p2=p1;
		p1=(struct student *)malloc(LEN);
		scanf("%ld %d",&p1->num,&p1->score);

	}
	p2->next=NULL;



	return head;
}

struct student *insert(struct student *ah,struct student *bh)
{
 struct student *pa1,*pa2,*pb1,*pb2;
 pa2=pa1=ah;
 pb2=pb1=bh;
 do
 {
 	while( (pb1->num>pa1->num) && (pa1->next!=NULL) )//比他大 往后找
 	{
 		pa2=pa1;
 		pa1=pa1->next;
 	}
 	if(pb1->num<pa1->num)//比他小 两情况
 	{
 		if(pa1==ah)
 			ah=pb1;
 		else
 			pa2->next=pb1;
 		pb1=pb1->next;
 		pb2->next=pa1;

 		pa2=pb2;
 		pb2=pb1;
 	}
 }while( (pa1->next!=NULL) || (pa1==NULL && pb1!=NULL) );//a后还有 或者 （case当前a没有b有，即b仅最后一个）
 //因为a为主链 一直比较遍历a  

 if( (pb1!=NULL) && (pb1->num > pa1->num) && (pa1->next==NULL) )//a结束 b表有剩余 且都比a的大直接插后面
 	pa1->next=pb1;
 return ah;
}

void print(struct student *head)
{
	struct student *p;
	p=head;
	printf("There are %d records:\n",sum );
	if(p!=NULL)
	do
	{
     printf("%ld %d\n",p->num,p->score );
     p=p->next;
	}while(p!=NULL);
}
