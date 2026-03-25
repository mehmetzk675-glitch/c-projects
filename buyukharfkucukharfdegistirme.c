#include<stdio.h>

void buyukkucukharf(char a[])
{
	int i =0;
	while (a[i] !='\0'){
		if (a[i] >='A' && a[i] <='Z')
		{
			a[i] +=32;
		}
		else if (a[i]>='a' && a[i] <= 'z')
		{
			a[i] -=32;
		}
		i++;
	}
	puts(a);
	
}
int main()
{
	char x[50] = "dizideki harfleri degistir";
	buyukkucukharf(x);
	return 0;
}
