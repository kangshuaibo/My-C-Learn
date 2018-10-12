#include <stdio.h>
int main()
{
	int h,l,u,v;
	int high_common_factor(int u,int v);//声明
	int lowest_common_multiple(int u,int v,int h);
//输入数据
    printf("请输入两个数：");
	scanf("%d%d",&u,&v);
//调用函数
	h=high_common_factor(u,v);
	l=lowest_common_multiple(u,v,h);
	printf("最大公约数为：%d最小公倍数为：%d\n",h,l );
	return 0;
}

int high_common_factor(int u,int v)
{
 int t;
 while(u%v!=0)
 {
   t=u%v;
   u=v;
   v=t;
 }
 return v;

}

int lowest_common_multiple(int u,int v,int h)
{
	int t;
 t=u*v/h;
 return t;
}