//水仙花数是 其各个位上的数字的立方和等于该数本身 如153是一个水仙花数 因为153=1^2 + 5^2 + 3^2
#include <stdio.h>
int main(int argc, char const *argv[])
{   int hundred,ten,indiv;
	int n;
	for(n=100;n<1000;n++)//三位数
	{
		hundred=n/100;
		ten=n/10-hundred*10;
		indiv=n%10;
		if(n==hundred*hundred*hundred+ten*ten*ten+indiv*indiv*indiv)
			printf("%d\t",n);
		//continue;
	}
	printf("\n");
	return 0;
}