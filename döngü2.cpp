#include<stdio.h>


int main(){
	int n;
	int fact = 1;
	
	printf("faktoriyel istediginiz sayiyiy girin:");
	scanf("%d",&n);
	
	while(n!=0){
		printf("%d\n",n);
		fact = fact*n;
		
		
		
		n--;
	}
	
	printf("%d",fact);
	
	
	
	
	
	
	return 0;
}
