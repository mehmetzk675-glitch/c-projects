#include<stdio.h>



int main(){
	
	int dizi[5];
	int i,j;
	int temp;
	
	for(i=0;i<5;i++){
		printf("dizi icin deger girin:");
		scanf("%d",&dizi[i]);
	}
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(dizi[i]>dizi[j]){
				temp=dizi[i];
				dizi[i]=dizi[j];
				dizi[j]=temp;
			}
		}
	}
	printf("buyukten kucuge dizi:");
	for(i=0;i<5;i++){
		printf("%d",dizi[i]);
	}
	
	return 0;
}
