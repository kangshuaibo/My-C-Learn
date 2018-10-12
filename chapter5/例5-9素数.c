#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
	int i,k,n;
	printf("please enter a number\n");
	scanf("%d",&n);
	k=sqrt(n);
	for(i=1;i<k;i++)
		if(n%i==0)break;//一旦被整除跳出循环

	if(i<=k)
	printf("not prime\n");//判断i小于等于k
	else 
	printf("is a prime\n");//判断i是否大于等于k+1，若是说明循环完整 是素数
	return 0;
}//注意一个是k 一个是k+1哦