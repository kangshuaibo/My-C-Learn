#include <stdio.h>
float Max,Min;//全局变量 定义在最上
int main(int argc, char const *argv[])
{   
	float score[10];
	float average(float array[],int n);//声明
	//输入成绩
	printf("请输入学生成绩：\n");
	int i;
	for(i=0;i<10;i++)
	  scanf("%f",&score[i]);
	//调用函数
	printf("平均：%f最高：%f最低：%f\n", average(score,10),Max,Min);
	

	return 0;
}
float average(float array[],int n)
{
 int aver,sum;
 sum=array[0];
 Max=Min=array[0];
 int i;
 for(i=1;i<n;i++){
 	sum=sum+array[i];
 	if(array[i]>Max)
 		Max=array[i];
 	if(array[i]<Min)
 		Min=array[i];
 }
 	
 aver=sum/n;


 return aver;
}