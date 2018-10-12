#include <stdio.h>
int main(int argc, char const *argv[])
{
	char text[3][80];
	int i,j,uup,low,digit,space,other;
	i=j=uup=low=digit=space=other=0;

	for(i=0;i<3;i++)
	{   
		printf("请输入第%d行：",i+1);//从第一行开始驶入 输入完立刻开始统计
		gets(text[i]);

		for(j=0;j<=80&&(text[i][j]!='\0');j++)
		{
			if(text[i][j]<='Z'&&text[i][j]>='A')
				uup++;
			else 
				if(text[i][j]<='z'&&text[i][j]>='a')
                      low++;
				else 
					if(text[i][j]<='9'&&text[i][j]>='0')
						digit++;
					else
						if(text[i][j]==' ')
							space++;
						else
							other++;
						}

			

	}
 printf("大写字母%d小写字母%d数字%d空格%d其他%d\n",uup,low,digit,space,other);


	return 0;
}