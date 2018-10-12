#include <stdio.h>
int main(int argc, char const *argv[])
{
	float average(float array[10]);//声明 （数组名作为形参）
	float score[10],aver;         //存放成绩的数组score aver用来存放数组的返回值
	//输入数组
	printf("请输入十个学生成绩：");
	int i;
	for(i=0;i<10;i++)
	{
		scanf("%f",&score[i]);
	}
	printf("\n");


	//函数调用
	aver=average(score);      //数组名为函数实际参数 （传递数组第一个元素的首地址）
	printf("平局成绩为：%f\n",aver);
	
	return 0;
}

float average(float array[10])//数组名作为形参 （传递了数组第一个元素的首地址） 对array操作 就是对score操作
{ 								//这个10可以不写 不检查形参数组大小 只传递首地址
	float sum=array[0],aver;
	int i;
  for(i=0;i<10;i++)
  	sum=sum+array[i];
  aver=sum/10;
  return aver;

}
