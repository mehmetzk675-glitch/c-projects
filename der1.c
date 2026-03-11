#include<stdio.h>



int main(){
	float ort;
	float quiz,vize,final;
	printf("quiz vize ve final notlarini girin:");
	scanf("%f\n%f\n%f",&quiz,&vize,&final);
	
	ort = (quiz*1)/10+(vize*4)/10+(final*5)/10;
	printf("%f",ort);
	if(ort>45){
		printf("gectiniz");
	}
	else{
		printf("kaldiniz");
	}
	
	return 0;
}
