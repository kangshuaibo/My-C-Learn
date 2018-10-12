//猴子吃桃子问题，猴子第一天吃了桃子的一半觉得不过瘾 又多吃了一个
//第二天又吃了一半，又多吃一个。
//第十天一看只剩下一个了
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int x1=1,x2;//x1为第一天，x2为第一天的前一天
    int i;
	for(i=1;i<10;i++)
	{
      x2=(x1+1)*2;
      x1=x2;
	}
	printf("%d\n",x2 );

	return 0;
}
