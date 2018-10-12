#include <stdio.h>
int main(int argc, char const *argv[])
{
	float sorce;
	char grade;
	printf("请输入学生成绩\n");
	scanf("%f",&sorce);
	while(sorce>100||sorce<0){
		printf("输入有误请重新输入\n");
		scanf("%f",&sorce);
	}
	switch((int)(sorce/10))//强制类型转换
    {
    	case 10:
    	case 9:grade='A';break;
    	case 8:grade='B';break;
    	case 7:grade='C';break;
    	case 6:grade='D';break;
    	case 5:
    	case 4:
    	case 3:
    	case 2:
    	case 1:grade='E';
    }

printf("成绩为%5.1f相应的等级为%c\n",sorce,grade);


	return 0;
}