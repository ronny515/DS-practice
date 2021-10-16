/* use recursive  to cal x^n   */
#include <stdio.h> 
int
main(void)
{
	int Power(int x,int n){
		int f;
		if(n%2==0)f=1;
		else f=x;
		return f*Power(x*x,n/2);
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
