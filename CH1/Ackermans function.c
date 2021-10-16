/* use recursive  to cal Ack(x,n)   */
#include <stdio.h> 
int
main(void)
{

	int Ack(int x,int n){
		if(x==0)return n+1;
		else if(n==0) return Ack(x-1,1);
		else return Ack(x-1,Ack(x,n-1));
	}
	/*
	int x,  // input - x.      
	n;    // output - n  
	printf("Enter X ");
	scanf("%d",&x);
	printf("Enter n ");
	scanf("%d",&n);
	
	*/
  
	int x=4,  // input - x.      
	n=0;    // output - n           
	printf("Arc(%d,%d)=%d.\n", x,n,Ack(x,n));
	return (0);
}
