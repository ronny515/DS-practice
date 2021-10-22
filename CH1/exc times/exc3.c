/*  ¤j¬ùn^5
sigma(i^4+i^2)/2  i=1 to n  */
#include <stdio.h> 
int main(void)
{
	int i,j,k,n,x,x2;
	x=0;
	x2=0;
	n=5;
	for(i=1;i<=n;i++)
		for(j=1;j<=i*i;j++)
			for(k=1;k<=j;k++)
				x++;

	printf("n= %d ,X=%d.\n", n,x);
	for(i=1;i<=n;i++){
		x2=x2+(i*i*i*i+i*i)/2;
	}
		
	printf("n= %d ,X2=%d.\n", n,x2);
  return (0);
}
