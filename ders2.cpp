#include<stdio.h>

int main(){
	
	int matris[5][5];
	int sum=0;
	int i,j;
	
	for (i=0;i<5;i++){
		for (j=0;j<5;j++){
		
		scanf("%d",&matris[i][j]);
		}
	}
	
		for (i=0;i<5;i++){
		for (j=0;j<5;j++){
	
		printf("|%d|",matris[i][j]);
	}
	printf("\n");
	}
	for (j=0;j<5;j++){
		for (i=0;i<5;i++){
			sum +=matris[i][j];
		}
		printf("|%d|" ,sum);
		sum=0;
	}
	
	return 0;
}
