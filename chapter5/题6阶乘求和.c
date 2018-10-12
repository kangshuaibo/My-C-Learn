#include <stdio.h>
int main()
{
   double n=1,s=0;
   int i;
   for(i=1;i<=20;i++)
   {
   	n=n*i;
   	s=n+s;
   }
   printf("s=%20.15e\n",s );
}