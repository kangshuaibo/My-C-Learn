//在全系1000个学生当中征集善款 当总数达到10万元就结束统计捐款人数 以及平均捐款数
#include <stdio.h>

#define SUM 100000

int main(int argc, char const *argv[])
{
	float amount,aver,total;
	int i;
	for(i=1,total=0;i<=1000;i++)
	{
		printf("请输入捐款数");
		scanf("%f",&amount);
		total=total+amount;
		if(total>=SUM)
			break;
	}
	aver=total/i;
	printf("捐款人数%d，平均捐款数%f\n",i,aver);
	return 0;
}