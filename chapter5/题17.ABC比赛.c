//A不与X比 C不与X Z比
//解：设A与i
//     B与j
//     C与k
#include <stdio.h>
int main(int argc, char const *argv[])
{
	char i,j,k;
	for(i='x';i<='z';i++)
      for(j='x';j<='z';j++)//在其中找符合条件的k
      	 if(i!=j)
      		for(k='x';k<='z';k++)
      			if(i!=k&&j!=k)
      				if(i!='x'&&k!='x'&&k!='z')//题意
      					printf("A与%c B与%c C与%c\n",i,j,k );
	return 0;
}