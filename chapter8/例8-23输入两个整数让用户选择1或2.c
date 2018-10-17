//输入两个整数 然后让用户选择1或2 选1时调用max函数 选2时调用min函数
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int max(int,int);
	int min(int,int);

	int(*p)(int,int);
	int a,b,c,n;
   //输入
	printf("请输入a和b:\n");
	 scanf("%d%d",&a,&b);

    //选择模式 
	printf("请选择1或2\n");
	 scanf("%d",&n);
	 if(n==1)
      p=max; //函数指针变量 调用函数
     else if (n==2)
      p=min;
  //调用函数
  c=(*p)(a,b);


   //按模式输出
   if(n==1)
   	printf("max=%d\n",c );
   else
   	printf("min=%d\n",c );
	return 0;
}


int max(int x,int y)
{
	int z;
	if(x>y)
		z=x;
	else
		z=y;
	return z;
}

int min(int x,int y)
{
  int z;
  if(x<y)
  z=x;
  else
  z=y;
  return z;

}