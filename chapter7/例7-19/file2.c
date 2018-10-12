extern int A;
int power(int m)
{
	int z=1;
	int i;
	for(i=0;i<m;i++)
		z=z*A;
	return z;
}