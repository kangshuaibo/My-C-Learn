#include <stdio.h>
int main(){
	float a,b,c,t;
	scanf("%f%f%f",&a,&b,&c);
	if(a>b){
		t=a;
		a=b;
		b=t;
	}
	else
		if (a>c)
		{
			t=a;
			a=c;
			c=t;
		}
		else
			//if(b>c){
				{t=b;
				b=c;
				c=t;
			}
			printf("三个数从小到大排列为:\n");
		printf("%6.1f%6.1f%6.1f\n", a,b,c);
}