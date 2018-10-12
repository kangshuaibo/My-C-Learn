#include <stdio.h>
int main(int argc, char const *argv[])
{
	double sn=100,hn=sn/2;//定义了第一次路程和下一次的高度
	int i;
	for(i=2;i<=10;i++)
	{
      sn=sn+2*hn;
      hn=1.0/2.0*hn;//当写成1/2时为整型 算出来为0 一定要写成hn/2或者1.0/2.0才是double型
	}
	printf("总路程%f,第十次反弹高度为%f\n",sn,hn );
	return 0;

}