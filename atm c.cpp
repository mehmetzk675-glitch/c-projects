#include<stdio.h>


int main(){
int islem;
int bakiye = 1000;
int tutar;

printf("islemler\n1:para cekme\n2:para yatirma\n3:Havale yapma\n4:Bakiye sorgulama\n5:kart iade\n\n\n");

printf("islemi seciniz:");
scanf("%d",&islem);

switch(islem){
	case 1 :
		printf("Bakiyeniz: %d\n",bakiye);
           printf("cekilecek tutar:");
           scanf("%d",&tutar);
           if (tutar>bakiye){
           	printf("Bakiye yetersiz\n");
		   }
           
           	bakiye -=tutar;
           	printf("Bakiyeniz:%d",bakiye);
	
break;	

	case 2:
		printf("Bakiyeniz: %d\n",bakiye);
           printf("yatirilacak tutar:");
           scanf("%d",&tutar);
         
           	bakiye +=tutar;
           	printf("Bakiyeniz:%d",bakiye);
		   
break;	
	
		
	case 3:
			printf("Bakiyeniz: %d\n",bakiye);
           printf("havale yapilacak tutar:");
           scanf("%d",&tutar);
           if (tutar>bakiye){
           	printf("Bakiye yetersiz\n");
		   }
           
           	bakiye -=tutar;
           	printf("Bakiyeniz:%d",bakiye);
		   
break;	

		
		
		
	case 4:
		printf("Bakiyeniz %d",bakiye);
		break;
		
	case 5:
	printf("kart iade edildi.\n");
	break;
	
	default:	
	printf("Bilinmeyen islem");
	break;
	
	
}	

	
	
	
	
	return 0;
}
