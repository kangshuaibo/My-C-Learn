#include <stdio.h>
int main(int argc, char const *argv[])
{
	void swap(int *p1,int *p2);//声明

    int n1,n2,n3;
    int *p1,*p2,*p3;

    printf("请输入三个数n1n2n3\n");
     scanf("%d%d%d",&n1,&n2,&n3);
     
    p1=&n1;
    p2=&n2;
    p3=&n3;

    if(n1>n2)swap(p1,p2);
    if(n1>n3)swap(p1,p3);
    if(n2>n3)swap(p2,p3);

    printf("有小到大顺序为：%d%d%d\n",n1,n2,n3 );

	return 0;
}

void swap(int *p1,int *p2)
{
	int temp;
	temp=*p1;
	*p1=*p2;
	*p2=temp;

}