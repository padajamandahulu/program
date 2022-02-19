#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int sspcl=30000;
	int sspcll=25000;
	int spp=40000;
	int skcl=35000;
	int skcll=30000;
	int skp=30000;
	int total_harga,porsi,menu,diskon,total;
	char password[10];
	
	printf ("+============================+\n");
   	printf ("|Masukan Password Rumah Makan|\n");
    printf ("+============================+\n");;
    	scanf("%s",&password);
		system ("cls");
		if (strcmp(password,"lembang" )==0){
			printf("selamat anda masuk\n");
			printf ("+===============================+\n");
    		printf ("| RM. Sate Maranggi Lembang     |\n");
    		printf ("+===============================+\n");
    		printf ("|               Menu            | \n"); 
    		printf ("|1. Sate Sapi Campur Lemak 1    |  \n");
    		printf ("|2. Sate Sapi Campur Lemak 2    |  \n");
    		printf ("|3. Sate Sapi polos             | \n");  
    		printf ("|4. Sate Kambing Campur Lemak 1 |    \n");
    		printf ("|5. Sate Kambing Campur Lemak 2 |          \n");
    		printf ("|6. Sate Kambing polos          |\n");
    		printf ("+===============================+\n");
   			printf ("+==Masukan Angka:\n");
    			scanf ("%d", &menu);
				if (menu==1){
					system ("cls");
					printf ("+===============================+\n");
    				printf ("|1. Sate Sapi Campur Lemak 1    |\n");
    				printf ("+===============================+\n");
    				printf ("berapa porsi yang anda beli :\n");
    					scanf ("%d",&porsi);
    					total_harga = sspcl*porsi;
    					printf ("total yang harus dibayar adalah Rp. %d\n",total_harga);
					
				}else if (menu==2){
					system ("cls");
					printf ("+===============================+\n");
    			   	printf ("|2. Sate Sapi Campur Lemak 2    |  \n");
    				printf ("+===============================+\n");
    				printf ("berapa porsi yang anda beli :\n");
    					scanf ("%d",&porsi);
    					total_harga=porsi*sspcll;
    					diskon=total_harga*0.1;
    					if(porsi >=1 && porsi <=3){
    						printf ("maka yang harus dibayar :\n %d",total_harga);	
    					}else if(porsi  >3 ){
    						total=total_harga*0.90;
    						printf ("anda mendapatkan diskon Rp.%d \n",diskon);
    						printf ("maka yang harus dibayar :\n %d",total);
    					}else{
    						printf("masukan angka yang benar");
    					}
					
				}else if (menu==3){
					system ("cls");
					printf ("+===============================+\n");
    			   	printf ("|3. Sate Sapi polos             | \n");
    				printf ("+===============================+\n");
    				printf ("berapa porsi yang anda beli :\n");
    					scanf ("%d",&porsi);
    					total_harga = spp*porsi;
    					printf ("total yang harus dibayar adalah Rp. %d\n",total_harga);
					
				}else if (menu==4){
					system ("cls");
					printf ("+===============================+\n");
    			   	printf ("|4. Sate Kambing Campur Lemak 1 |    \n");
    				printf ("+===============================+\n");
    				printf ("berapa porsi yang anda beli :\n");
    					scanf ("%d",&porsi);
    					total_harga = skcl*porsi;
    					printf ("total yang harus dibayar adalah Rp. %d\n",total_harga);
				}else if (menu==5){
					system ("cls");
					printf ("+===============================+\n");
    			   	printf ("|5. Sate Kambing Campur Lemak 2 |          \n");
    				printf ("+===============================+\n");
    				printf ("berapa porsi yang anda beli :\n");
    					scanf ("%d",&porsi);
    						if(porsi >=1 && porsi <=3){
    							total_harga=porsi*skcll;
    							printf ("maka yang harus dibayar :\n %d",total_harga);	
    						}else if(porsi  >3 ){
    							total=total_harga*0.90;
    							printf ("maka yang harus dibayar :\n %d",total);	
    						}else{
    							printf("masukan angka yang benar");
    						}
				}else if (menu==6){
					system ("cls");
					printf ("+===============================+\n");
    			   	printf ("|6. Sate Kambing polos          |\n");
    				printf ("+===============================+\n");
    				printf ("berapa porsi yang anda beli :\n");
    					scanf ("%d",&porsi);
    					total_harga = skp*porsi;
    					printf ("total yang harus dibayar adalah Rp. %d\n",total_harga);
				}
		}else {
         printf("password anda salah");
         
    	}
}
