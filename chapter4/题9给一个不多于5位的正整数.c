//给一个不多于五位的正整数  要求：1、求出他是几位数2、分别输出每一位数字3、按逆序输出各个数字如123为321
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int num,indiv,ten,hundred,thousand,ten_thousand,place;//输入的数 indiv个 ten十 hundred百 thousand千 ten_thounsand万 place位数
	printf("请输入 一个0-99999之间的整数\n");
	scanf("%d",&num);
	/*if(num-((int)num>1e-6))
		printf("不符合要求 请重新输入\n");*/
	while(num>99999||num<0)
		{   
			printf("不符合要求 请重新输入\n");
	        scanf("%d",&num);
	        
        }
	if(num>9999)
		place=5;
	else
		if(num>999)
			place=4;
		else
			if(num>99)
				place=3;
			else
				if(num>9)
					place=2;
				else
					place=1;
	printf("位数为：%d\n", place);

	printf("每位数字为：\n");
	ten_thousand=num/10000;
	thousand=(int)((num-ten_thousand*10000)/1000);
	hundred=(int)((num-ten_thousand*10000-thousand*1000)/100);
	ten=(int)((num-ten_thousand*10000-thousand*1000-hundred*100)/10);
	indiv=(int)((num-ten_thousand*10000-thousand*1000-hundred*100-ten*10));

	switch(place)
	{
		case 5:printf("%d%d%d%d%d\n",ten_thousand,thousand,hundred,ten,indiv);
		       printf("反序为：\n");
		       printf("%d%d%d%d%d\n",indiv,ten,hundred,thousand,ten_thousand );
		       break;
		case 4:printf("%d%d%d%d\n",thousand,hundred,ten,indiv);
		       printf("反序为：\n");
		       printf("%d%d%d%d\n",indiv,ten,hundred,thousand);
		       break;
		case 3:printf("%d%d%d\n", hundred,ten,indiv);
		       printf("反序为：\n");
		       printf("%d%d%d\n",indiv,ten,hundred);
		       break;
	    case 2:printf("%d%d\n",ten,indiv );
	           printf("反序为：\n");
	           printf("%d%d\n", indiv,ten);
	           break;
	    case 1:printf("%d\n", indiv);
	           printf("反序为：\n");
	           printf("%d\n",indiv );
	           break;


	}


	return 0;
}