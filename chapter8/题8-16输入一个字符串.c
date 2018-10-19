/*输入一个字符串，内有数字字符和非数字字符，
例如A123x456 17960 ?302tab5876将其中连
续的数字作为一个整数依次存到数组a中
如123存到a[0],456存放a[1],依次统计有多少个整数
*/
#include <stdio.h>
int main()
{
	char str[50],*pstr;
	int a[10],i,j,k,e10,digit,ndigit,*pa;

	printf("input a string\n");
	gets(str);

	pstr=&str[0];
	pa=&a[0];

	ndigit=0;
	i=0;
	j=0;         //😝类似于开关 是数字则开启 统计数字
    while( *(pstr+i)!='\0')
    {
      	if( (*(pstr+i)>='0') && (  *(pstr+i)<='9')  )//判断是数字
      		j++; 
      	else                             //不是数字了 开始把前方统计的数字型字符转换成数
      	{
      		if(j>0)
      		{
      			digit= *(pstr+i-1)-48; //数字字符转换 数字ASCII
      			k=1;                   //判断有几位数 （多一位e10就多乘10）
      			while(k<j)//k定位此while j 为多少位数
      			{
      				e10=1;
      				for(int count=1;count<=k;count++)  //有一位就多乘10
      					e10=e10*10;
      				digit=digit+( *(pstr+i-1-k)-48)*e10;//分别记录好的数字
      				k++;
      			}
      			*pa=digit;          //给数组a
      			ndigit++;			//统计一遍数字 ndigit加一个
      			pa++; 				//指向下一个字符
      			j=0;				//😀开关重置 准备统计下一个字符
      		}
      	}
       i++; //定位while的循环
    }//while over


   if(j>0)//最后一个字符时 再来一遍。。
   {
      	digit= *(pstr+i-1)-48;
		k=1;
		while(k<j)
		{
			e10=1;
			for(m=1;m<=k;m++)
				e10=e10*10;
			digit=digit+( *(pstr+i-1-k)-48)*e10;
			k++;
		}
		*pa=digit;
		ndigit++;
		pa++;
		j=0;
    }//if over
 


   printf("They are %d numbers in this line ,They are :\n",ndigit );
   j=0;
   pa=&a[0];
   for(j=0;j<ndigit;j++)
   	 printf("%d ",*(pa+j) );
   printf("\n");
   




return 0;
}