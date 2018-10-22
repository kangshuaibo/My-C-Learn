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

int main()
{   //声明
	struct student *creat();
	struct student *del(struct student*,long);
	struct student *insert(struct student*,struct student*);
	void print(struct student*);

	struct student *head,stu;//指针变量 和要插入元素
	long del_num;

	printf("input records:");
	head=creat();
	print(head);

	printf("input delete number:");
	scanf("%ld",&del_num);
	head=del(head,del_num);
	print(head);

	printf("input the insert record:");
	scanf("%ld%f",&stu.num,&stu.score);
	head=insert(head,&stu);
	print(head);

	return 0;
}

struct student *creat()
{  
   struct student *p1,*p2;
   struct student *head;

   p1=p2=(struct student *)malloc(LEN);//开辟一个 输入数据
   scanf("%ld%f",&p1->num,&p1->score );
   head=NULL;
   n=0;
   while(p1->num!=0)
   {n=n+1;
   	if(n==1)
   		head=p1;
   	else
   		p2->next=p1;//p2与head行为等价 只不过head为赋值
   	p2=p1;//他俩往下跳。。。。
   	p1=(struct student*)malloc(LEN);

   scanf("%ld%f",&p1->num,&p1->score);

   }
  p2->next=NULL;//表尾滞空

  return head;
	
}

struct student *del(struct student *head,long num)
{
	struct student *p1,*p2;
	if(head==NULL)
	{
		printf("\nlist is null");
	    return head;
	}

	p1=head;
	while(num!=p1->num && p1->next!=NULL)//没找到 往下跑
	{
		p2=p1;
		p1=p1->next;
	}

	if(num==p1->num)//找到了 两判断
	{
 		if(p1==head)//删的是第一个
 			head=p1->next;
 		else
 			p2->next=p1->next;  //p2操作与head等价 只不过head 为赋值
 		printf("%ld has been delete\n",num);
 		n=n-1;
	}
	else//不存在
	printf("%ld not been found\n",num );

    return head;
}

struct student *insert(struct student *head,struct student *stud)//stud 为要插入的指针变量
{
	struct student *p0,*p1,*p2;
	p1=head;
	p0=stud;
	if(head==NULL)//只有头 插后面
	{
		head=p0;
		p0->next=NULL;
	}
	else
	{
		while( (p0->num >p1 ->num)&&(p1->next!=NULL))// 大于他 后不空 往后找
		{
			p2=p1;
			p1=p1->next;
		}
		if(p0->num<p1->num)//小于他 两判断
			{
				if(head==p1)//插第一个节点前面
					head=p0;
				else
					p2->next=p0;//p2与head本质上同操作只不过head 被赋值
				p0->next=p1;
			}
		else//插在表尾
		{
			p1->next=p0;
			p0->next=NULL;
		}
	}

	n=n+1;
	return head;
}


void print(struct student *head)
{
	struct student*p;
	printf("\nNow,This %d records are:\n",n);
	p=head;//三个一家子
	if(head!=NULL)//不是空链表
	while(p!=NULL)
	{
		printf("%ld%5.1f\n",p->num,p->score );
		p=p->next;
	}
}


























