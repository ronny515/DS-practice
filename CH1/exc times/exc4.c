/*  ¤j¬ù n*log2(n)  */
#include <stdio.h> 
int main(void)
{
	int i,j,k,n,x,a;
	x=0;
	n=32;
	for(i=1;i<=n;i++)
	{
		a=n;
		while(a>=0)
		{
			a=a-i;
			x++;
		}
	}


	printf("n= %d ,X=%d.\n", n,x);
  return (0);
}
