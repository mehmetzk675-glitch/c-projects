#include<stdio.h>
#include<math.h>



int main(){
	
	float a,b,c;
	float delta;
	float x1,x2;
	printf("denklemin a,b,ve c degerlerini girin:");
	scanf("%f\n%f\n%f",&a,&b,&c);
	
	
	delta =( b*b )-( 4*a*c);
	x1=(-b + (sqrt(delta)))/2*a;
	x2=(-b - (sqrt(delta)))/2*a;
	
	printf("birinci kok:%f,ikinci kok:%f",x1,x2);
	
	return 0;
}
