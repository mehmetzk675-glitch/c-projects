#include<stdio.h>



int main(){
	int ftoplam,n,i;
	int ort,enyuksek;
	int dizi[100];
	printf("kac not girilecek");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("ogrencilerin notlarini girin:");
		scanf("%d",&dizi[i]);
	}
	
	for(i=0;i<n;i++){
		toplam +=dizi[i];
	}
	ort=toplam/n;
	printf("ortalama:%d",ort);
	enyuksek=dizi[0];
	
	for(i=0;i<n;i++){
		if(dizi[i]>enyuksek){
			enyuksek=dizi[i];
		}
	}
	printf("en yuksek not:%d",enyuksek);
	
	return 0;
}
