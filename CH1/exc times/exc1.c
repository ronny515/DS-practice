/*  log (n!)  */
#include <stdio.h> 
int main(void)
{
	int i,j,k,n,x;
	x=0;
	n=16;
	for(i=1;i<=n;i++)
		for(j=i;j>=1;j/=2)
			x++;

	printf("n= %d ,X=%d.\n", n,x);
  return (0);
}
