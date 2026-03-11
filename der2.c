#include<stdio.h>





int main(){
	int n;
	
	printf("aracin kac saat parkta kaldigini girin:");
	scanf("%d",&n);
	
	if(n=1){
		printf("ucret 3tl");
	}
	else if(n>1&n<4){
		printf("ucret 6tl");
	}
	else if(n>4&n<6){
		printf("ucret 8tl");
	}
	else if(n>6&n<10){
		printf("ucret 10tl");
	}
	else if(n>10){
		printf("ucret %d tl",n);
	}
	else{
	 
	printf("lutfen gecerli bir deger girin");
}
	return 0;
}
