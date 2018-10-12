#include <stdio.h>
int main()
{
	float a,b;
	int max(int,int);//声明

   
	printf("请输入两个整数:");
	scanf("%f%f",&a,&b);
    int c;
    c=max(a,b);
	printf("%d\n",c);
}

int max(int x,int y)
{
  int z;
  z=x>y?x:y;
  return z;

}