#include <stdio.h>
#include <math.h>
//判断是否为素数
int main()
{ printf("这是1版本");
  int i,m,k;
  scanf("%d",&m);//输入m
  k=sqrt(m);//平方根 赋值给k,不需要全部遍历完，只需m/2个数就 ok甚至根号m就ok

	  for (i=2;i<k;i++)
	  {
	  	if(m%i==0)//根据素数的定义n依次除以 小于它本身 大于1的数
	  		{
	  			k=0;//一旦有能被整除的数，表明 n不是素数，使得k=0
	  		}
	  }
	  if(k==0)
	  {
	    printf("%d不是素数",m);
	  }
	  else 
	  {
		printf("%d是素数",m);
	  }

 }

