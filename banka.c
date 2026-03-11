#include<stdio.h>


int main(){
	int islem;
	int bakiye = 1000;
	int tutar;
	
	printf("ISLEMLER\n1.islem para cekme\n2.islem para yatirma\n3.islem havale yapma\n4.islem bakiye sorgulama\n5.islem kart iade\n\n\n");
	printf("yapmak istediginiz islem:\n");
	scanf("%d",&islem);
	
	switch(islem){
		case 1:
			printf("bakiyeniz:%d",bakiye);
			printf("cekmek istediginiz tutari giriniz:");
			scanf("%d",&tutar);
			if(tutar>bakiye){
				printf("islem gerceklestirilemedi");
			}
		else{
			bakiye=bakiye-tutar;
			printf("bakiyeniz:%d",bakiye);
		}
		break;
		case 2:
			printf("bakiyeniz:%d",bakiye);
			printf("yatirmak istediginiz tutari giriniz:");
			scanf("%d",&tutar);
		
			bakiye=bakiye+tutar;
			printf("bakiyeniz:%d",bakiye);
		break;
		case 3:
			
			printf("bakiyeniz:%d",bakiye);
			printf("havale yapmak istediginiz tutari giriniz:");
			scanf("%d",&tutar);
			if(tutar>bakiye){
				printf("islem gerceklestirilemedi");
			}
		else{
			bakiye=bakiye-tutar;
			printf("bakiyeniz:%d",bakiye);
		}
		break;
		default:
			printf("yapmak istediginiz islem bulunamadi");
		break;
		
	}
	
	
	
	
	
	
	
	return 0;
}
