/* use recursive  to cal x^n   */
#include <stdio.h> 
int
main(void)
{

	int Power(int x,int n){
		if(n==1)return x;
		else return x*Power(x,n-1);
	}
	 /*
	int x,  // input - x.      
         n;    // output - n  
  printf("Enter X ");
  scanf("%d",&x);
  printf("Enter n ");
  scanf("%d",&n);
  
  */
  	int x=2,  // input - x.      
         n=13;    // output - n  
	printf("x=%d n= %d ,X^n=%d.\n", x,n,Power(x,n));
  return (0);
}
