#include<stdio.h>



int main(){
	
	int i,ilksayi=1,ikincisayi=1;
	int temp;
	
	printf("%d\n%d\n",ilksayi,ikincisayi);
	
	for(i=0;i<13;i++){
		temp=ikincisayi;
		ikincisayi +=ilksayi;
		ilksayi=temp;
		
		printf("%d\n",ikincisayi);
		
	}
	
	
	return 0;
}
