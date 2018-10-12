#include<stdio.h>
int main(int argc, char const *argv[])
{
	int sn=0,tn=0,n,a;
	printf("请输入a和n\n");
	scanf("%d%d",&a,&n);
	int i;
	for(i=1;i<=n;i++)
	{  
	    tn=tn+a;//这是每一项的值前一项加上a为后一项 2 2+20 2+20+200
		sn=sn+tn;
		a=a*10;//循环乘10每次为前一个10倍 如2 20 200
		
		
	}
	printf("sn为%d\n",sn);

	return 0;
}