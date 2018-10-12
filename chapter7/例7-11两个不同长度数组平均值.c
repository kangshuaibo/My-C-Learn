#include <stdio.h>
int main(int argc, char const *argv[])
{
	float average(float array[],int n);//声明
	float score1[5]={98.5,97,91.5,60,55};
	float score2[10]={67.5,89.5,99,69.5,77,89.5,76.5,54,60,99.5};
	//函数调用
	printf("class A:");
	printf("%f\n",average(score1,5));
	printf("class B:");
	printf("%f\n",average(score2,10) );
	return 0;
}
float average(float array[],int n)
{   float sum;
	sum=array[0];
	int i;
	for(i=1;i<n;i++)//已经加了array[0]了 因此循环4次
	{
		sum=sum+array[i];
	}
	return (sum/n);
}