#include <stdio.h>
#include <string.h>
int main()
{  char line[100];
   //声明
   int alphabetic(char c);//判断是否为字母1 0
   int longest(char str[]);//最长单词位置
   //输入
   printf("请输入字符串：");
    gets(line);
   //调用函数 同时输出
   printf("最长单词为：");
    int i;
   for(i=longest(line);alphabetic(line[i]);i++)
    	printf("%c",line[i]);
   printf("\n");

	return 0;
}
int alphabetic(char c)
{
  if( (c>='A'&&c<='Z')||(c>='a'&&c<='z') )
  	return(1);
  else
  	return(0);
}


int longest(char str[])
{
  int flag=1,len=0,length=0,place=0,point;
  int i;
  for(i=0;i<=strlen(str);i++)//疑问❓改成str[i]!='\0'结果不正确
  {
    if(alphabetic(str[i]))//如果是字母
    {
    	if(flag)
    	{
    		point=i;//单词开始 flag置0
    	    flag=0;
    	}
    	else
    	{
    		len++;  //flag==0记录长度 		
    	}
    }
    else//如果不是字母 则准备下一个单词
    {
    	flag=1;
    	if(len>=length)
    	{
          length=len;
          place=point;//❌书中把len=0写到复合语句中显然不正确 （每计算下一个单词长度要置0 而不是大于最长的才置0）
        } 
        len=0;//书中错误❌
    	
    }//else over
  }//for over
 return place;

}//function over