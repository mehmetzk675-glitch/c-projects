#include<stdio.h>
int carpim(int sayilar[],int size){
	int carp=1;
   int i;
for(i=0;i<size;i++){
	carp *=sayilar[i];
}	
	return carp;
}

int main(){
	
	int sayilar[5]={1,2,3,4,5};
	printf("degerlerin carpimi:%d",carpim(sayilar,5));
	
	
	
	
	return 0;
}
