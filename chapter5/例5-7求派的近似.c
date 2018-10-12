#include <stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{   int sign=1;//定义符号
	long int m=0;
	double pi=0,n=1,term=1;//term代表当前项的值
	while(fabs(term)>=1e-10)	
	{	pi=term+pi;//开始已经定义了值 先加起来为第一项

		n=n+2;//制造第二项分母。原料
	    sign=-sign;//第二项符号求反 原料
	    term=sign/n;//制造第二项的值 整体
	    //第二项。。第三项。。。第四项。。。可以循环了
		m=m+1;printf("%ld次循环\n",m );
	}
	pi=4*pi;
	printf("pi=%20.9f\n",pi );
	
	return 0;
}
