#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	int secim, eskiBakiye, miktar, fatura, faturasecim, j, yn;
	int i=1, bakiye = 1000, telfatura = 200, elektrikfatura = 500, sufatura = 250, netfatura = 0;
	
	while(i == 1)
	{
		printf("1 - Bakiye Goruntule\n2 - Para Yatir\n3 - Para Cek\n4 - Fatura Ode\n5 - Cikis\n\n");
		scanf("%d",&secim);

		switch(secim)
		{
			case 1 :
				printf("Bakiyeniz : %d TL",bakiye);
				
				printf("Bir üst menüye dönmek için 0 tusuna basin.\n");
				scanf("%d",&yn);
				
				if(yn == 0){
					printf("Cikis Yapildi.\n");
				}
				
			break;
			
			case 2 : 
				printf("Bakiyeniz : %d\n",bakiye);
				printf("Miktar giriniz : ");
				scanf("%d",&miktar);
				eskiBakiye = bakiye;
				bakiye += miktar;
				
				printf("\n------------------------\n");
				printf("Eski Bakiyeniz : %d\n", eskiBakiye);
				printf("Yatirdiginiz tutar : %d\n", miktar);
				printf("Guncel Bakiyeniz : %d", bakiye);
				printf("\n------------------------\n");
				
				printf("Bir üst menüye dönmek için 0 tusuna basin.\n");
				scanf("%d",&yn);
				
				if(yn == 0){
					printf("Cikis Yapildi.\n");
				}
			break;
					 
			case 3 :
				printf("Cekmek istediginiz tutar : ");
				scanf("%d",&miktar);
				eskiBakiye = bakiye;
				bakiye -= miktar;
				
				printf("\n------------------------\n");
				printf("Eski Bakiyeniz : %d\n", eskiBakiye);
				printf("Cektiginiz tutar : %d\n", miktar);
				printf("Guncel Bakiyeniz : %d", bakiye);
				printf("\n------------------------\n");
			
				printf("Bir üst menüye dönmek için 0 tusuna basin.\n");
				scanf("%d",&yn);
				
				if(yn == 0){
					printf("Cikis Yapildi.\n");
				}
			break;
			
			case 4 : 
				
				for(j = 0; j < 1; j++)
				{
						printf("1 - Telefon\n2 - Elektrik\n3 - Su\n4 - Internet\n5 - Geri Dön : \n");
						printf("Odemek istediginiz fatura: \n");
						scanf("%d",&faturasecim);
						switch(faturasecim)
						{
							case 1 :
								if(telfatura > 0){
									printf("Telefon faturaniz : %d\n",telfatura);
									bakiye = bakiye - telfatura;
									printf("Faturaniz Odendi.\nKalan bakiyeniz: %d\n",bakiye);
									telfatura = 0;
								}
							
								else {
									printf("Faturaniz Bulunmamaktadir.\n");
								}
								break;
				
							case 2 :	
								if(elektrikfatura > 0){
									printf("Elektrik faturaniz : %d\n",elektrikfatura);
									bakiye = bakiye - elektrikfatura;
									printf("Faturaniz Odendi.\nKalan bakiyeniz: %d\n",bakiye);
									elektrikfatura = 0;
									}
									
								else {
									printf("Faturaniz Bulunmamaktadir.\n");
									}
								break;
							
							case 3 :	
								if(sufatura > 0){
										printf("Su faturaniz : %d\n",sufatura);
										bakiye = bakiye - sufatura;
										printf("Faturaniz Odendi.\nKalan bakiyeniz: %d\n",bakiye);
										sufatura = 0;
								}
									
								else {
									printf("Faturaniz Bulunmamaktadir.\n");
								}
								break;
									
							case 4 :	
								if(netfatura > 0){
									printf("Internet faturaniz : %d\n",netfatura);
									bakiye = bakiye - netfatura;
									printf("Faturaniz Odendi.\nKalan bakiyeniz: %d\n",bakiye);
									netfatura = 0;
									}
		
								else {
									printf("Faturaniz Bulunmamaktadir.\n");
								}
								break;
								
							case 5 : 
								printf("Cikis Yapmak istediginize Emin misiniz? y(0)/n(1)\n");
								scanf("%d",&yn);
								
								if(yn == 0){
								printf("Cikis Yapildi.\n");
								j = 1;
								
								}
								else{
								j = 0;
								}
								break;
							
							default : printf("Yanlis Girdiniz.\n");
						}
					
				}
				
				break;
			case 5 : 
				printf("Cikis Yapmak istediginize Emin misiniz? y(0)/n(1)\n");
				scanf("%d",&yn);
				
				if(yn == 0){
					printf("Cikis Yapildi.\n");
				i = 0;
					
				}
				else{
					i = 1;
				}
				break;
				
			default: 
				printf("\n-----------------------\n");
				printf("\nYanlis Secim Yaptiniz!!\n");
				printf("\n-----------------------\n");
			break;
		}
		
	}
	return 0;	
	system("PAUSE");
}

