/* write a recursive  algo/code 
print permutation of n data
eg Perm(a,b,c) 
print abc
acb
bac
bca
cab
cba
*/
#include <stdio.h> 
#include <stdlib.h> 

int main(void)
{
	void Swap(char *p1 ,char *p2){
		char temp;
		temp=*p1;
		*p1=*p2 ;
		*p2=temp ;
	}



	void perm(char list[], int i,int n){
		int j,temp;
		if(i==n){
			for(j=1;j<=n;j++)printf("%c", list[j]);
			printf("\n");
		}
		else{
			for(j=i;j<=n;j++){
				Swap(&list[i],&list[j]);
				perm(list, i+1, n);
				Swap(&list[i],&list[j]);
			}
		}
	}
	/*
	int x,  // input - x.      
	n;    // output - n  
	printf("Enter X ");
	scanf("%d",&x);
	printf("Enter n ");
	scanf("%d",&n);
	
	*/
	char list[4];
	int i,n;
	i=1;
	n=3;
	list[1]='a';
	list[2]='b';
	list[3]='c';
	//list[4]='d';
	
	
	int j;
	//for(j=1;j<=n;j++)printf("%c", list[j]);
	
	perm(list, i,n);
	printf("\n");

	for(j=1;j<=n;j++)printf("%c", list[j]);
	
	return (0);
}
