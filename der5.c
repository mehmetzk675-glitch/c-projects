#include<stdio.h>


int main(){
	int i,n;
	int dizi[100];
	int enbuyuk,enkucuk;
	printf("dizi kac elemanli olacak");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("dizi elemani gir:");
		scanf("%d",&dizi[i]);
	}
	enbuyuk=dizi[0];
	enkucuk=dizi[0];
	for(i=0;i<n;i++){
		if(dizi[i]>enbuyuk){
			enbuyuk=dizi[i];
		}
	}
	for(i=0;i<n;i++){
		if(dizi[i]<enkucuk){
			enkucuk=dizi[i];
		}
	}
	printf("en buyuk deger:%d",enbuyuk);
	printf("en kucuk deger:%d",enkucuk);
	
	
	return 0;
}
