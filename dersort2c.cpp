#include<stdio.h>


int main(){
	
	float vize1,vize2,final;
	float dersort;
	
	
	
	printf("vize1 notunuzu girin:");
	scanf("%f",&vize1);
	
		printf("vize2 notunuzu girin:");
	scanf("%f",&vize2);
	
		printf("final notunuzu girin:");
	scanf("%f",&final);
	vize1=(vize1*40)/100;
	vize2=(vize2*10)/100;
	final=(final*50)/100;
	dersort = (vize1+vize2+final);
	printf("%.2f",dersort);
	if(final>=25){
	
	if(dersort>=45){
		printf("Gectiniz");
	}
	else{
		printf("kaldiniz");
	}
}
else{
	printf("kaldiniz");
}	
	
	return 0;
}
