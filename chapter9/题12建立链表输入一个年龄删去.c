#include <stdio.h>
#include <stdlib.h>
#define LEN sizeof(struct student)

struct student
{
	char num[6];
	char name[8];
	char sex[2];
	int age;
	struct student *next;
}stu[10];

int main()
{
	struct student *p,*pt,*head;
	int i,length,iage,flag=1;
	int find=0;

	while(flag==1)
	{
		printf("input length of list(<10)\n");
		scanf("%d",&length);
		if(length<10)
			flag=0;
	}

	//建立链表
	head=stu; // 😄妈的疯了吧！！！！！！！
	for(i=0;i<length;i++)
	{
		p=(struct student *)malloc(LEN);
		if(i==0)
			head=pt=p;
		else
			pt->next=p;
		pt=p;

		printf("No.:");
		 scanf("%s",p->num);
		printf("name:");
		 scanf("%s",p->name);
		printf("sex:");
		 scanf("%s",p->sex);
		printf("age:");
		 scanf("%d",&p->age);
	}
	p->next=NULL;
	p=head;
	printf("\nNo.    name    sex     age\n");
	while(p!=NULL)
	{
		printf("%4s %8s %6s %6d\n",p->num,p->name,p->sex,p->age );
		p=p->next;
	}
    
    //删除节点
    printf("input age\n");
     scanf("%d",&iage);

    pt=head;
    p=pt;
    if(pt->age==iage)//链表头 是
    {
    	p=pt->next;
    	head=pt=p;
    	find=1;
    }
    else             //链表头 不是
    	pt=pt->next;
    //中间节点
    while(pt!=NULL)
    {
    	if(pt->age==iage)
    	{
    		p->next=pt->next;
    		find=1;
    	}
    	else
    		p=pt;
    	pt=pt->next;
    }

    if(!find)
    	printf("not found %d\n",iage );

    //输出
     p=head;
     printf("\nNo. name sex age\n");
     while(p!=NULL)
     {
     	printf("%4s%8s%6s%6d\n",p->num,p->name,p->sex,p->age );
     	p=p->next;
     }


return 0;
}
