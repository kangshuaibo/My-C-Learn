#include <stdio.h>
int main(int argc, char const *argv[])
{
	void input(int *);
	void max_min_value(int *);
	void output(int *);

	int number[10];

	input(number);
	max_min_value(number);
	output(number);


	return 0;
}
void input(int *array)
{
  int i;
  printf("请输入10个数\n");
  for(i=0;i<10;i++)
  	scanf("%d",&array[i]);
}

void max_min_value(int *array)
{
	int *min,*max,*p,temp;
	max=min=array;       //注意❌赋值号方向

	for(p=array+1;p<array+10;p++)
		if(*p<*min) min=p;
	temp=*min;
    *min=array[0];
    array[0]=temp;

    for(p=array+1;p<array+10;p++)
    	if(*p>*max) max=p;
    temp=*max;
    *max=array[9];
    array[9]=temp;
}

void output(int *array)
{
	int i;
	for(i=0;i<10;i++)
	  printf("%d ",array[i] );

}