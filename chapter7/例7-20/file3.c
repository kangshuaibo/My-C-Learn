void delete_string(char str[],char ch)
{
	int i,j=0;
	for(i=0;str[i]!='\0';i++)
       if(str[i]!=ch)
       	str[j++]=str[i];
       str[j]='\0';
}