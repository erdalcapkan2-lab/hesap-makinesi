#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char islem;
	int sayi1,sayi2;
	printf("yapmak istediðiniz iþlemi girin \n");
	scanf(" %c", &islem);
	
	if(islem != '/' && islem!='*' && islem!='+' && islem!='-')
	{
		printf("girdiginiz deger hatalidir");
    	return 0;
	}
	
    printf("ilk sayiyi giriniz \n");
    scanf(" %d", &sayi1);
    
    printf("ikinci sayiyi giriniz \n");
    scanf(" %d", &sayi2);
    
    if(islem=='+')
    {
    	printf("cevap=");
    	printf(" %d", sayi1+sayi2);
	}
	
	
	else if(islem=='*')
	{
		printf("cevap= %d", sayi1*sayi2);
	}
	
	else if(islem=='/')
	{
		if(sayi2==0)
		{
			printf("sayi 0 a bolunemez");		
		}
		else
		{
			printf("cevap %f", (float)sayi1/sayi2);
		}
		
	}
	
	else if(islem=='-')
	{
		printf("cevap %d", sayi1-sayi2);
	}
	

return 0;
}
	

