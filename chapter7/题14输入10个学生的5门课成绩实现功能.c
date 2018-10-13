//输入十个学生5门课成绩，分别用函数实现以下功能
//1、计算每个学生平均分
//2、计算每门课平均分
//3、找出所有50个分数中最高的分数所对应的学生和课程
//4、计算平均分方差
#include<stdio.h>
#define N 10//学生
#define M 5 //课
float score[N][M];//10个学生 5门课
double a_stu[N],a_cour[M];//每一个学生的平均分，每一门课程平均分
int r,c;//最高分行号列号

int main()
{   float h,v;
  //声明
	void input_stu(void);
	void aver_stu(void);
	void aver_cour(void);
	float highest(void);//最高
	float s_var(void);//求方差
 //调用
	input_stu();
	aver_stu();
	aver_cour();
	h=highest();
	v=s_var();
//输出
	
	//每个学生的成绩 及一个学生的平均成绩
	int i,j;
	printf("NO.     cour1   cour2    cour3   cour4   cour5   aver\n");
	for(i=0;i<N;i++)
	{printf("\nNO.%d",i+1 );
     for(j=0;j<M;j++)
     	printf("%8.1f",score[i][j] );
     printf("%8.2f\n",a_stu[i]);
	}
  printf("\n");
    //输出五门课平均成绩
    printf("n_average：");

    for(j=0;j<M;j++)
    {
     printf("%8.1f",a_cour[j] );
     
    }
    
  printf("\n");
	//最高的学生 成绩 编号
    printf("最高：%8.2f  学号：%5d 科目：%5d",h,r+1,c+1);
  printf("\n");  
    //输出方差
    printf("方差：%f",v);
  printf("\n"); 
  return 0;

}//main over




void input_stu()
{
	int i,j;
	for(i=0;i<N;i++)
	{
		printf("请输入第%d个学生的%d门课成绩",i+1,M);
		for(j=0;j<M;j++)
			scanf("%f",&score[i][j]);
	}
}//input_stu() over



void aver_stu()
{ float sum=0;
	int i=0,j;
  for(i=0;i<N;i++)
  { sum=0;
    for(j=0;j<M;j++)
    {
    	sum=sum+score[i][j];
    }
    a_stu[i]=(sum/5.0);
    
  }
}




void aver_cour()
{ 
  float sum;
  int i,j;
  for(j=0;j<M;j++)//这里非常注意j为外循环 搞错了对全局变量有影响的
  { sum=0;
  	for(i=0;i<N;i++)
  		sum=sum+score[i][j];
  	a_cour[j]=(sum/10.0);
  	;
  }
}



float highest()
{
 float h;
 h=score[0][0];
 int i,j;
 for(i=0;i<N;i++)
 	for(j=0;j<M;j++)
 		if (score[i][j]>h)
 		{
 			h=score[i][j];
 			r=i;
 			c=j;
 		}
 return h;
}


float s_var()
{
   float sumx,sumxn,a1,a2;
	int i;
	sumx=0.0;
	sumxn=0.0;
	for(i=0;i<N;i++)
	{
      sumx=sumx+a_stu[i]*a_stu[i];
      sumxn=sumxn+a_stu[i];
	}
	a1=sumx/N;
	a2=(sumxn/N)*(sumxn/N);
	return (a1-a2);
  
}








