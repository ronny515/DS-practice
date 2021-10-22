/*  2n-1  */
#include <stdio.h> 
int main(void)
{
	int i,j,k,n,x;
	x=0;
	n=32;
	for(i=1;i<=n;i*=2)
		for(j=1;j<=i;j++)
			x++;

	printf("n= %d ,X=%d.\n", n,x);
  return (0);
}
