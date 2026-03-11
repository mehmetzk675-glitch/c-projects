#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void hanoi(int n,char kaynak,char hedef,char ara,int i){
	if (n==1){
		printf("Disk 1'i %c cubugundan %c cubuguna tasi\n",kaynak,hedef);
		return;
	}
	hanoi(n - i;kaynak,ara,hedef);
	
	printf("Disk %d'i %c cubugundan %c cubuguna tasi\n",n,kaynak,hedef);
	
	hanoi(n - 1,ara,hedef,kaynak);
	
}
int main(){
	int diskSayisi;
	printf("Disk sayisini girin:");
	scanf("%d",&diskSayisi);
	
	printf("\nHanoi kuleleri:\n");
	hanoi(diskSayisi,'A','C','B');
	return 0;
}
