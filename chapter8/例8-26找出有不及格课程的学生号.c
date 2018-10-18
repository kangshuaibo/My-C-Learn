#include <stdio.h>
int main()
{
	float score[][4]={{60,70,80,90},{56,89,67,88},{34,78,90,66}};

    float *search(float (*pointer)[4]);//声明
    float *p;
    int i,j;
    for(i=0;i<3;i++)  //将每一行的学生送到函数中
    {  p=search(score+i);
    	if(p!=NULL)
    	{
    		printf("序号%d有不及格，的成绩为\n", i);
    		for(j=0;j<4;j++)
    		printf("%5.1f ",*(p+j) );
    	}
      printf("\n");
    }
    
    	

    return 0;
}

float *search(float (*pointer)[4]) //逐个遍历这一行 返回这一行地址
{   int i;
	float *pt;
	pt=NULL;  //定义了指针必须有指向
	for(i=0;i<4;i++)
		if( *( *pointer+i )<60 )
			pt=*pointer;
		return pt;


	
}