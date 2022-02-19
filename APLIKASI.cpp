#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h>
#include <stdio.h>
void setcolor(unsigned short color)
{
	HANDLE hCon=
	GetStdHandle(STD_OUTPUT_HANDLE);
	
	SetConsoleTextAttribute(hCon,color);
}
void panggilMenu(void);
void Penghitungan();
void struk(void);
void SetColor(unsigned short);

    struct macammenu
    {
        int menumakan,menuminuman;
    };
    struct subtotal
    {
        int jmlbeli1,jmlbeli2,jmlbeli3,jmlbeli4,jmlbeli5,jmlbeli6,jmlbeli7,jmlbeli8,jmlbeli9,jmlbeli10;
        int totalharga, bayar, kembalian;
    };
    struct makan
    {
        int soto, bakso , pecel, mie_ayam,gado2;

    };
    struct minum
    {
        int esteh, esjeruk, essirup,sogem, esklamud;

    };
    struct makan menu_mak;
    struct minum menu_min;
    struct macammenu menu;
    struct subtotal sub;
   

    char yakin;
    time_t ambil_waktu;


int main()
{
    int x;
	panggilMenu();
    return 0;
}

void panggilMenu (void){
   
    makan:
        SetColor(9);{
    printf("\n\t Selamat datang di Mana-Mana Hatiku Senang Restoe's.\n");}
    printf("\t\tSilakan pilih menu yang Anda sukai:\n\n");
    printf("====================================================================\n");
    printf("|No.| Makanan \t| Harga    |\t\t|No.| Minuman\t | Harga   |\n");
    printf("|-------------------------------------------------------------------\n");
    printf("| 1 | Soto\t|  Rp.3500 |\t\t");
    printf("| 6.| Es Teh\t | Rp.1500 | \n");
    printf("| 2 | Bakso\t|  Rp.7500 |\t\t");
    printf("| 7.| Es Jeruk\t | Rp.2500 |\n");
    printf("| 3 | Pecel\t|  Rp.4000 |\t\t");
    printf("| 8.| Es Sirup\t | Rp.2000 |\n");
    printf("| 4 | Mie Ayam\t|  Rp.6500 |\t\t");
    printf("| 9.| Es Sogem\t | Rp.5000 |\n");
    printf("| 5 | Gado-Gado\t|  Rp.4500 |\t\t");
    printf("| 10| Es Klpa Md | Rp.3500 |\n");
    printf("\n====================================================================");
    printf("\n ");
    printf("\n99. Struk Pembayaran\n55. Reset pilihan\n00.  Keluar\n");
    printf("===============================================\n");

 for (menu.menumakan!=0;menu.menumakan!=99;){
 
 printf("\nInput pilihan yang Anda inginkan:         "); scanf("%d",&menu.menumakan); 
    switch(menu.menumakan) {
    case 1:
            printf("\n [1] Pemesanan Soto\n");
            printf("jumlah pesan =\t\t\t  ");scanf("%d",&menu_mak.soto);
            printf("\n===============================================\n");
            sub.jmlbeli1=menu_mak.soto*3500;
            break;
    case 2:
            printf("\n [2]Pemesanan Bakso\n");
            printf("jumlah pesan = \t\t\t  ");scanf("%d",&menu_mak.bakso);
            printf("\n===============================================\n");
            sub.jmlbeli2=menu_mak.bakso*7500;
    break;
    case 3:
            printf("\n [3] Pemesanan Pecel\n");
            printf("jumlah pesan = \t\t\t  ");scanf("%d",&menu_mak.pecel);
            printf("\n===============================================\n");
            sub.jmlbeli3=menu_mak.pecel*4000;
    break;
    case 4:
            printf("\n [4] Pemesanan Mie Ayam\n");
            printf("jumlah pesan = \t\t\t  ");scanf("%d",&menu_mak.mie_ayam);
            printf("\n===============================================\n");
            sub.jmlbeli4=menu_mak.mie_ayam*6500;
    break;
    case 5:
            printf("\n [5] Pemesanan Gado-Gado\n ");
            printf("jumlah pesan = \t\t\t  ");scanf("%d",&menu_mak.gado2);
            printf("\n===============================================\n");
            sub.jmlbeli5=menu_mak.gado2*4500;
    break;
    case 6:
            printf("\n [6] Pemesanan Es Teh\n ");
            printf("jumlah pesan = \t\t\t  ");scanf("%d",&menu_min.esteh);
            printf("\n===============================================\n");
            sub.jmlbeli6=menu_min.esteh*1500;
    break;
    case 7:
            printf("\n [7] Es Jeruk\n");
            printf("jumlah pesan = \t\t\t  ");scanf("%d",&menu_min.esjeruk);
            printf("\n===============================================\n");
            sub.jmlbeli7=menu_min.esjeruk*2500;
    break;
    case 8:
            printf("\n [8] Es Sirup\n");
            printf("jumlah pesan = \t\t\t  ");scanf("%d",&menu_min.essirup);
            printf("\n===============================================\n");
            sub.jmlbeli8=menu_min.essirup*2000;
    break;
    case 9:
            printf("\n [9] Sogem\n");
            printf("jumlah pesan = \t\t\t  ");scanf("%d",&menu_min.sogem);
            printf("\n===============================================\n");
            sub.jmlbeli9=menu_min.sogem*5000;
    break;
    case 10:
            printf("\n [10] Es Klamud\n");
            printf("jumlah pesan = \t\t\t  ");scanf("%d",&menu_min.esklamud);
            printf("\n===============================================\n");
            sub.jmlbeli10=menu_min.esklamud*2000;
    break;
    case 99:
            Penghitungan();  
    break;
    case 55:
            system("cls");
            panggilMenu(); 
    break;
    case 00:
            peyakinan:
            printf("Apakah anda yakin ingin keluar?\n\n[input Y untuk Ya]\t[input T untuk Tidak]\n\n");
            printf("Input Pilihan \t\t\t\t");scanf("%s",&yakin);

            if (yakin=='Y'||yakin=='y') 
            {
                system("cls");
                printf("\t\t- Terima Kasih atas kunjungan Anda -\n\n");
        	exit(0);
            }
            else if (yakin=='T'||yakin=='t')  
            {
                system("cls");
                panggilMenu();
            }
            else  
            {
                printf("\nKesalahan inputan\n\n");
                system("pause");
                goto peyakinan;
            }

    break;
    default: 
        printf("Kesalahan inputan, menu no.%d tidak ada dalam daftar\n",menu.menumakan);
        printf("- Silakan input kembali\n");
    break;
    }
	}
	}

void SetColor(unsigned short color) {
HANDLE hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsoleOutput,color);}

void Penghitungan(void)
{
            printf("\nPesanan Makanan \n");
            printf("\tJumlah | Nama Minuman  | Total Harga\n\t====================================\n");
            printf("\t   %d   : Soto         : Rp. %d \n",menu_mak.soto, sub.jmlbeli1);
            printf("\t   %d   : Bakso        : Rp. %d \n",menu_mak.bakso, sub.jmlbeli2);
            printf("\t   %d   : Pecel        : Rp. %d \n",menu_mak.pecel, sub.jmlbeli3);
            printf("\t   %d   : Mie Ayam     : Rp. %d \n",menu_mak.mie_ayam, sub.jmlbeli4);
            printf("\t   %d   : Gado - Gado  : Rp. %d \n",menu_mak.gado2, sub.jmlbeli5);
            printf("\t------------------------------------\n\n");

            printf("Pesanan Minuman \n");
            printf("\tJumlah | Nama Minuman  | Total Harga\n\t====================================\n");
            printf("\t   %d   : Es Teh        : Rp. %d \n",menu_min.esteh, sub.jmlbeli6);
            printf("\t   %d   : Es Jeruk      : Rp. %d \n",menu_min.esjeruk, sub.jmlbeli7);
            printf("\t   %d   : Es Sirup      : Rp. %d \n",menu_min.essirup, sub.jmlbeli8);
            printf("\t   %d   : Soda Gembira  : Rp. %d \n",menu_min.sogem, sub.jmlbeli9);
            printf("\t   %d   : Kelapa Muda   : Rp. %d \n",menu_min.esklamud, sub.jmlbeli10);
            printf("\t------------------------------------\n");
   
            sub.totalharga=sub.jmlbeli1+sub.jmlbeli2+sub.jmlbeli3+sub.jmlbeli4+sub.jmlbeli5+sub.jmlbeli6+sub.jmlbeli7+sub.jmlbeli8+sub.jmlbeli9+sub.jmlbeli10;
            printf("\n===============================\nTotal Harga adalah = Rp.%d,-\n===============================\n",sub.totalharga);
           
   bayar:
            printf("\nMasukkan uang bayar = ");scanf("%d",&sub.bayar);
   
            if (sub.bayar>=sub.totalharga)
            {
            sub.kembalian=sub.bayar-sub.totalharga;
            printf("\nKembalian = %d", sub.kembalian);
            }
            else
            {
                printf("Uang Anda tidak cukup! Silakan input ulang\n");

                goto bayar;
            }
           
   printf("\nTekan apa saja untuk melihat struk pembayaran\n");
            system("Pause");
            system("cls");
            struk();
}

void struk(void)
    {
        time(&ambil_waktu); 
        printf("=================================================================\n");
        printf("| \t\tDimana-Mana Hatiku Senang               \t|\n");
        printf("| \t\tJl.Sersan Badjuri km.4, Lembang\t\t\t|\n| \t\t\tJawa Barat\t\t\t\t|\n");
        printf("| \tTelp : (087828812893/a.n Vikri Khoirul Fikroh           |\n");
        printf("|_______________________________________________________________|\n");
        printf("| Nama Pesanan  | Harga Satuan  | Jumlah  | \t    Total  \t|\n");
        printf("|===============|===============|=========|=====================|\n");
        if (sub.jmlbeli1>0)
        {
        printf("|    Soto\t|     3500\t|    %d\t  |  Rp.%d\t\t|",menu_mak.soto,sub.jmlbeli1);
        }
                if (sub.jmlbeli2>0)
        {
        printf("\n|    Bakso\t|     7500\t|    %d\t  |  Rp.%d\t\t|",menu_mak.bakso,sub.jmlbeli2);
        }
                if (sub.jmlbeli3>0)
        {
        printf("\n|    Pecel\t|     4000\t|    %d\t  |  Rp.%d\t\t|",menu_mak.pecel,sub.jmlbeli3);
        }
                if (sub.jmlbeli4>0)
        {
        printf("\n|    Mie Ayam\t|     6500\t|    %d\t  |  Rp.%d\t\t|",menu_mak.mie_ayam,sub.jmlbeli4);
        }
                if (sub.jmlbeli5>0)
        {
        printf("\n|    Gado2\t|     4500\t|    %d\t  |  Rp.%d\t\t|",menu_mak.gado2,sub.jmlbeli5);
        }
                if (sub.jmlbeli6>0)
        {
        printf("\n|    Es Teh\t|     1500\t|    %d\t  |  Rp.%d\t\t|",menu_min.esteh,sub.jmlbeli6);
        }
                if (sub.jmlbeli7>0)
        {
        printf("\n|    Es Jeruk\t|     2500\t|    %d\t  |  Rp.%d\t\t|",menu_min.esjeruk,sub.jmlbeli7);
        }
                if (sub.jmlbeli8>0)
        {
        printf("\n|    Es Sirup\t|     2000\t|    %d\t  |  Rp.%d\t\t|",menu_min.essirup,sub.jmlbeli8);
        }
                if (sub.jmlbeli9>0)
        {
        printf("\n|    Sogem\t|     5000\t|    %d\t  |  Rp.%d\t\t|",menu_min.sogem,sub.jmlbeli9);
        }
                if (sub.jmlbeli10>0)
        {
        printf("\n|    Es Klp Md\t|     3500\t|    %d\t  |  Rp.%d\t\t|",menu_min.esklamud,sub.jmlbeli10);
        }
        printf("\n|_______________________________________________________________|");
        printf("\n|                                                               |");
        printf("\n| Total Keseluruhan = %d\t\t\t\t\t|", sub.totalharga);
        printf("\n| Uang bayar        = %d\t\t\t\t\t|", sub.bayar);
        printf("\n| Kembalian         = %d\t\t\t\t\t|", sub.kembalian);
        printf("\n|_______________________________________________________________|");
        printf("\n\n\t\t  Waktu/Hari : %s  \t", ctime (&ambil_waktu));             
        printf("Perhatian : Barang yang dibeli tidak bisa dikembalikan!\t\n\n");


    }
