#include <stdio.h>
#include <stdlib.h>
#define LEN sizeof(struct student)

struct student
{
	long num;
	float score;
	struct student *next;
};

int n;

int main(int argc, char const *argv[])
{
	struct student *creat();
	struct student *del(struct student*,long);
	struct student *insert(struct student*,struct student *);
	void print(struct student*);

	struct student *head,*stu;
	long del_num;

	printf("input records:\n");
	head=creat();
	print(head);

	printf("input delete number\n");
	scanf("%ld",&del_num);
	while(del_num!=0)
	{
		head=del(head,del_num);
		print(head);
		printf("input delete number:\n");
		scanf("%ld",&del_num);
	}

	printf("input insert record\n");
	stu=(struct student*)malloc(LEN);
	scanf("%ld%f",&stu->num,&stu->score);
	while(stu->num!=0)
	{
		head=insert(head,stu);
		print(head);
		printf("input the insert records\n");
		stu=(struct student*)malloc(LEN);
		scanf("%ld %f",&stu->num,&stu->score);
	}




	return 0;
}

struct student *creat()
{
	struct student *head;
	struct student *p1,*p2;

	p1=p2=(struct student*)malloc(LEN);
	scanf("%ld%f",&p1->num,&p1->score);
	head=NULL;
	n=0;
	while(p1->num!=0)
	{
		n=n+1;
		if(n==1)
			head=p1;
		else
			p2->next=p1;
		p2=p1;
		p1=(struct student*)malloc(LEN);
		scanf("%ld%f",&p1->num,&p1->score);
	}
	p2->next=NULL;

	return head;

}

struct student *del(struct student * head,long num)
{
	struct student *p1,*p2;
	if(head==NULL)
	{
		printf("\nlist is null\n");
		return head;
	}
	p1=head;//从头开始
    while(p1->num!=num && p1->next!= NULL)//没找到 往后找
    {
    	p2=p1;
    	p1=p1->next;
    }
    if(p1->num==num)                     //找到了 两情况
    {
    	if(head==p1)
    		head=p1->next;
    	else
    		p2->next=p1->next; //p2与head本质上同操作 只不过head为赋值
    	printf("%ld has been delete\n",num );
    	n=n-1;
    }
    else
    	printf("%ld not been find\n",num );

    
return head;
}

struct student *insert(struct student*head,struct student *stud)
{
	struct student *p0,*p1,*p2;
	p1=head;
	p0=stud;//新节点
	if(head==NULL) //只有头 插后面
	{
		head=p0;
		p0->next=NULL;
	}

	while(p0->num>p1->num&&p1->next!=NULL)//比他大 往后找
	{
		p2=p1;
		p1=p1->next;
	}
	if(p0->num<p1->num)//比他小 两情况
	{
		if(p1==head)
			head=p0;
		else
			p2->next=p0;

	    p0->next=p1;
	}
	else//	插在尾部
	{
		p1->next=p0;
		p0->next=NULL;
	}

	n=n+1;
 return head;
}

void print(struct student *head)
{
	struct student *p;
	printf("\nNow,These %d records are",n);
	p=head;
	if(head!=NULL)
		while(p!=NULL)
		{
			printf("%ld%5.1f\n",p->num,p->score );
			p=p->next;
		}


}


















