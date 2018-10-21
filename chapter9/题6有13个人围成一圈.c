#include <stdio.h>
#define N 13
struct 
{
  int number;
  int pnext;
}link[N+1];

int main(int argc, char const *argv[])
{
	//初始化
	int i;
	for(i=1;i<=N;i++)
	{
		if(i==N)  //若是最后一个 地址 连到头上
			link[i].pnext=1;
		else
			link[i].pnext=i+1; 若不是最后 每个链接下一个
		link[i].number=i; //从1开始顺序赋值
		

	}


	
	int h;
	h=N; //h用于指向
	printf("the person who leave :\n");
	int count;
	while(count<N-1)
	{
		i=0;
		while(i!=3)
		{
			h=link[h].pnext;// 找下一个节点
			if(link[h].number)// 不是0就判断下一个的值 是0就不加 来保证序号连续：123。。。
				i++;
		}//第一趟 报3的已经死了

		printf("%4d",link[h].number); //输出这个死了的
		link[h].number=0;             //值置为0

		count++;
	}
	printf("\n");


	printf("the last one is\n");
	for(i=1;i<=N;i++)
		if(link[i].number)
			printf("%3d",link[i].number );
		printf("\n");

	return 0;
}