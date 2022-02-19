#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
void setcolor(unsigned short color)
{
	HANDLE hCon =
		GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(hCon, color);
}

int main()
{
	int barang1, barang2, barang3, bt, diskon, total;

	int menu, kamar, sewa, uang, hasil, putraA, putraB, putraC, tahun;

	int putriA, x, putriB, putriC, hasil1, hasil2, jumlah, jumlah1, jumlah2;

	char ulang, kembali, back, pb, pc, ceweA, ceweB, ceweC, a;

	char masuk[] = "MASUKAN PASSWORD KOSAN";

	double y;

	char password[10];

	do
	{

		printf("\n\n\n");
		printf("\t\t\t\t");
		setcolor(1);
		for (x = 0; masuk[x] != NULL; x++)
		{

			printf("%c", masuk[x]);
			for (y = 0; y <= 9999999; y++)
			{
			}
		}
		printf("\n");
		printf("\t\t\t\t:");
		scanf("%s", &password);
		system("cls");

		if (strcmp(password, "rpl2021") == 0)
		{

			ulang = 1;
			putraA = 20000000;
			putriA = 17000000;
			putraB = 17000000;
			putriB = 10000000;
			putraC = 10000000;
			putriC = 70000000;
			printf("\t\t ===================\n");
			printf("\t\t | KOSAN CERIA :D  |\n");
			printf("\t\t ===================\n");
			printf("\t\t | 1.Kosan Putra   |\n");
			printf("\t\t | 2.Kosan Putri   |\n");
			printf("\t\t | 3.Pembuat       |\n");
			printf("\t\t | 0.Keluar        |\n");
			printf("\t\t ===================\n");
			printf("\n");
			printf("\t\t  Masukan Menu     :");
			scanf("%d", &menu);
			switch (menu)
			{

			case 1:

				do
				{

					kembali = 1;
					system("cls");
					printf("*****[PILIHAN MENU ]*****\n");
					printf("1.KAMAR PUTRA TIPE A     \n");
					printf("2.Kamar PUTRA TIPE B     \n");
					printf("3.KAMAR PUTRA TIPE C     \n");
					printf("4.KEMBALI                \n");
					printf("Silahkan Pilihan Menu Pilihan Anda [1..3]");
					scanf("%d", &kamar);
					if (kamar == 1)
					{

						do
						{

							back = 1;
							system("cls");
							printf("KAMAR PUTRA TIPE A \n");
							printf("1.SEWA KAMAR       \n");
							printf("2.PERPANJANG SEWA  \n");
							printf("3.KEMBALI          \n");
							printf("Silahkan Masukan Menu Pilihan Anda [1..3]");
							scanf("%d", &sewa);
							if (sewa == 1)
							{
								system("cls");
								printf("Sewa Kamar               :20.000.000 Per Tahun\n");
								printf("Masukan Jumlah Uang Anda :");
								scanf("%d", &uang);
								if (uang >= putraA)
								{
									hasil1 = uang - putraA;
									printf("Kembaliannya             :%d\n", hasil1);
									printf("Apakah Anda Ingin Mengulanginya [Y/N] ");
									scanf("%s", &back);
									if (back == 'Y' || back == 'y')
									{
										back = 1;
									}
									else
									{
										ulang = 0;
									}
								}
								if (uang < putraA)
								{
									printf("Maaf...Saldo Anda Tidak Mencukupi Untuk Melakukan Transaksi ini\n");
									hasil1 = uang - putraA;
									printf("Uang Anda Kurang Sebanyak %d\n", hasil1);
									printf("Harap Coba Kembali [Y/T] : ");
									scanf("%s", &back);
									system("cls");
									if (back == 'Y' || back == 'y')
									{
										back = 1;
									}
									else
									{
										ulang = 0;
									}
								}
							}
							else if (sewa == 2)
							{
								system("cls");
								printf("Mendapat Diskon Sebesar 5%\n");
								printf("perpanjang Sewa        :20000000\n");
								printf("Masukan Uang Sewa Anda :");
								scanf("%d", &uang);
								if (uang < putraA)
								{
									printf("maaf...Saldo Anda Tidak Cukup Untuk Melakukan Transaksi ini \n");
									hasil1 = uang - putraA;
									printf("Uang Anda Kurang Sebanyak %d\n", hasil1);
									printf("Harap Coba Kembali [Y/T]");
									scanf("%s", &back);
									system("cls");
									if (back == 'Y' || back == 'y')
									{
										back = 1;
									}
									else
									{
										ulang = 0;
									}
								}
								else if (uang >= putraA)
								{
									diskon = putraA * 0.05;
									hasil1 = putraA - diskon;
									total = uang - hasil1;
									printf("kembaliannya           :%d\n", total);
									printf("Apakah Anda Ingin Mengulanginya [Y/N] ");
									scanf("%s", &back);
									system("cls");
									if (back == 'Y' || back == 'y')
									{
										back = 1;
									}
									else
									{
										ulang = 0;
									}
								}
							}
							else if (sewa == 3)
							{
								printf("Apakah Anda Yakin Ingin Kembali [Y/N]");
								scanf("%s", &back);
								system("cls");
								if (back == 'Y' || back == 'y')
								{
									kembali = 1;
								}
								else
								{
									ulang = 0;
								}
							}
							else if (sewa > 3)
							{
								printf("Maaf...Kode Yang Anda Masukan salah\n");
								printf("Apakah Anda Ingin Mengulanginya[Y/N]");
								scanf("%s", &back);
								if (back == 'Y' || back == 'y')
								{
									back = 1;
								}
								else
								{
									ulang = 0;
								}
							}
						} while (back == 1);
					}
					else if (kamar == 2)
					{
						system("cls");
						do
						{
							pb = 1;
							printf("KAMAR PUTRA TIPE B\n");
							printf("1.SEWA KAMAR      \n");
							printf("2.PERPANJANG SEWA \n");
							printf("3.KEMBALI         \n");
							printf("Silahkan Masukan Menu Pilihan Anda [1..3]");
							scanf("%d", &sewa);
							if (sewa == 1)
							{
								system("cls");
								printf("Sewa Kamar        :17.000.000\n");
								printf("Masukan Uang Anda :");
								scanf("%d", &uang);
								if (uang < putraB)
								{
									printf("Maaf...Saldo Anda Tidak Cukup Untuk Melakukan Transaksi Ini\n");
									hasil1 = uang - putraB;
									printf("Uang Anda Kurang Sebanyak %d\n", hasil1);
									printf("Harap Ulang Kembali [Y/N]");
									scanf("%s", &pb);
									system("cls");
									if (pb == 'Y' || pb == 'y')
									{
										pb = 1;
									}
									else
									{
										ulang = 0;
									}
								}
								else if (uang >= putraB)
								{
									hasil = uang - putraB;
									printf("kembaliannya      :%d\n", hasil);
									printf("Apakah Anda Ingin Mengulanginya [Y/N] ");
									scanf("%s", &pb);
									system("cls");
									if (pb == 'Y' || pb == 'y')
									{
										pb = 1;
									}
									else
									{
										ulang = 0;
									}
								}
							}
							else if (sewa == 2)
							{
								system("cls");
								printf("Mendapatkan Diskon Sebanyak 3\n");
								printf("perpanjang Sewa   :17.000.000\n");
								printf("Masukan Uang Anda :");
								scanf("%d", &uang);
								if (uang < putraB)
								{
									printf("maaf Saldo Anda Tidak Cukup Untuk Melakukan Transaksi Ini\n");
									hasil1 = uang - putraB;
									printf("Uang Anda Kurang Sebanyak :%d\n", hasil1);
									printf("Harap Ulang Kembali [Y/N]");
									scanf("%s", &pb);
									system("cls");
									if (pb == 'y' || pb == 'Y')
									{
										pb = 1;
									}
									else
									{
										ulang = 0;
									}
								}
								else if (uang >= putraB)
								{
									diskon = putraB * 0.03;
									hasil = putraB - diskon;
									total = uang - hasil;
									printf("kembaliannya      :%d\n", total);
									printf("Apakah Anda Ingin Mengulanginya [Y/N] ");
									scanf("%s", &pb);
									system("cls");
									if (pb == 'Y' || pb == 'y')
									{
										pb = 1;
									}
									else
									{
										ulang = 0;
									}
								}
							}
							else if (sewa == 3)
							{
								printf("Apakah Anda Yakin Ingin Kembali [Y/N]");
								scanf("%s", &pb);
								if (pb == 'y' || pb == 'Y')
								{
									kembali = 1;
								}
								else
								{
									kembali = 0;
								}
							}
							else if (sewa > 3)
							{
								printf("Maaf...Kode Yang Anda Masukan Salah\n");
								printf("Apakah Anda Ingin Mengulanginya [Y/N]");
								scanf("%s", &pb);
								system("cls");
								if (pb == 'y' || pb == 'Y')
								{
									pb = 1;
								}
								else
								{
									ulang = 0;
								}
							}
						} while (pb == 1);
					}
					else if (kamar == 3)
					{
						do
						{
							pc = 1;
							system("cls");
							printf("KAMAR PUTRA TIPE C \n");
							printf("1.SEWA KAMAR       \n");
							printf("2.PERPANJANG SEWA  \n");
							printf("3.KEMBALI		   \n");
							printf("Silahkan Masukan Menu Pilihan Anda [1..3]");
							scanf("%d", &sewa);
							if (sewa == 1)
							{
								system("cls");
								printf("Sewa Kamar        :10.000.000\n");
								printf("Masukan Uang Anda :");
								scanf("%d", &uang);
								if (uang < putraC)
								{
									printf("Maaf...Saldo Anda Tidak Cukup Untuk Melakukan Transaksi Ini\n");
									hasil1 = uang - putraC;
									printf("Uang Anda Kurang Sebanyak %d", hasil1);
									printf("Harap Ulang Kembali [Y/N]");
									scanf("%s", &pc);
									system("cls");
									if (pc == 'Y' || pc == 'y')
									{
										pc = 1;
									}
									else
									{
										ulang = 0;
									}
								}
								else if (uang >= putraC)
								{
									hasil = uang - putraC;
									printf("kembaliannya      :%d\n", hasil);
									printf("Apakah Anda Ingin Mengulanginya [Y/N] ");
									scanf("%s", &pc);
									if (pc == 'Y' || pc == 'y')
									{
										pc = 1;
									}
									else
									{
										ulang = 0;
									}
								}
							}
							else if (sewa == 2)
							{
								system("cls");
								printf("Selamat!...Anda Mendapatkan Diskon 2%\n");
								printf("perpanjang Sewa   :10.000.000\n");
								printf("Masukan Uang Anda :");
								scanf("%d", &uang);
								if (uang < putraC)
								{
									printf("maaf Saldo Anda Tidak Cukup Untuk Melakukan Transaksi Ini\n");
									hasil1 = putraA - uang;
									printf("Uang Anda Kurang Sebanyak %d\n", hasil1);
									printf("Harap Ulang Kembali [Y/N]");
									scanf("%s", &ulang);
									system("cls");
								}
								else if (uang >= putraC)
								{
									diskon = putraC * 0.02;
									hasil1 = putraC - diskon;
									total = uang - hasil1;
									printf("kembaliannya      :%d\n", total);
									printf("Apakah Anda Ingin Mengulanginya [Y/N] ");
									scanf("%s", &pc);
									system("cls");
									if (pc == 'y' || pc == 'Y')
									{
										pc = 1;
									}
									else
									{
										ulang = 0;
									}
								}
							}
							else if (sewa == 3)
							{
								printf("Apakah Anda Yakin Ingin Kembali [Y/N]");
								scanf("%s", &pc);
								system("cls");
								if (pc == 'Y' || pc == 'y')
								{
									back = 1;
								}
								else
								{
									ulang = 0;
								}
							}
							else
							{
								printf("Maaf...Kode Yang Anda Masukan Salah\n");
								printf("Apakah Anda Ingin Mengulanginya [Y/N]");
								scanf("%s", &pc);
								if (pc == 'y' || pc == 'Y')
								{
									pc = 1;
								}
								else
								{
									ulang > 0;
								}
							}
						} while (pc == 1);
					}
					else if (kamar == 4)
					{
						printf("Apakah Anda Ingin Mengulanginya [Y/N]");
						scanf("%s", &kembali);
						system("cls");
						if (kembali == 'Y' || kembali == 'y')
						{
							ulang = 1;
						}
						else
						{
							ulang = 0;
						}
					}
					else if (kamar > 4)
					{
						printf("Maaf...Kode Yang Anda Masukan Salah/Tidak Terdaftar\n");
						printf("Apakah Anda Ingin Mengulanginya [Y/N]");
						scanf("%s", &kembali);
						if (kembali == 'Y' || kembali == 'y')
						{
							kembali = 1;
						}
						else
						{
							ulang = 0;
						}
					}
				} while (kembali == 1);
				break;

			case 2:
				do
				{
					a = 1;
					system("cls");
					printf("*****[PILIHAN MENU ]***** \n");
					printf("1.KAMAR PUTRI TIPE A      \n");
					printf("2.Kamar PUTRI TIPE B      \n");
					printf("3.KAMAR PUTRI TIPE C      \n");
					printf("4.KEMBALI                 \n");
					printf("Silahkan Pilihan Menu Pilihan Anda [1..3]");
					scanf("%d", &kamar);
					if (kamar == 1)
					{
						do
						{
							ceweA = 1;
							system("cls");
							printf("KAMAR PUTRI TIPE A\n");
							printf("1.SEWA KAMAR\n");
							printf("2.PERPANJANG SEWA\n");
							printf("3.KEMBALI\n");
							printf("Silahkan Masukan Menu Pilihan Anda [1..3]");
							scanf("%d", &sewa);
							if (sewa == 1)
							{
								system("cls");
								printf("Sewa Kamar               :17.000.000 Per Tahun\n");
								printf("Masukan Jumlah Uang Anda :");
								scanf("%d", &uang);
								if (uang >= putriA)
								{
									hasil = uang - putriA;
									printf("Kembaliannya             :%d\n", hasil);
									printf("Apakah Anda Ingin Mengulanginya [Y/N] ");
									scanf("%s", &ceweA);
									system("cls");
									if (ceweA == 'Y' || ceweA == 'y')
									{
										ceweA = 1;
									}
									else
									{
										ulang = 0;
									}
								}
								if (uang < putriA)
								{
									printf("Maaf...Saldo Anda Tidak Mencukupi Untuk Melakukan Transaksi ini\n");
									hasil1 = uang - putriA;
									printf("Uang Anda Kurang Sebanyak %d\n", hasil1);
									printf("Harap Coba Kembali [Y/T] : ");
									scanf("%s", &ceweA);
									system("cls");
									if (ceweA == 'y' || ceweA == 'Y')
									{
										ceweA = 1;
									}
									else
									{
										ulang = 0;
									}
								}
							}
							else if (sewa == 2)
							{
								system("cls");
								printf("Mendapat Diskon Sebesar 5%\n");
								printf("perpanjang Sewa        :17.000.000\n");
								printf("Masukan Uang Sewa Anda :");
								scanf("%d", &uang);
								if (uang < putriA)
								{
									printf("maaf...Saldo Anda Tidak Cukup Untuk Melakukan Transaksi ini \n");
									hasil = uang - putriA;
									printf("Uang Anda Kurang Sebanyak %d\n", hasil);
									printf("Harap Coba Kembali [Y/T]");
									scanf("%s", &ceweA);
									system("cls");
									if (ceweA == 'y' || ceweA == 'Y')
									{
										ceweA = 1;
									}
									else
									{
										ulang = 0;
									}
								}
								else if (uang >= putriA)
								{
									diskon = putriA * 0.03;
									hasil1 = putriA - diskon;
									total = uang - hasil1;
									printf("kembaliannya           :%d\n", total);
									printf("Apakah Anda Ingin Mengulanginya [Y/N] ");
									scanf("%s", &ceweA);
									system("cls");
									if (ceweA == 'y' || ceweA == 'Y')
									{
										ceweA = 1;
									}
									else
									{
										ulang = 0;
									}
								}
							}
							else if (sewa == 3)
							{
								printf("Apakah Anda Yakin Ingin Kembali [Y/N]");
								scanf("%s", &ceweA);
								system("cls");
								if (ceweA == 'y' || ceweA == 'Y')
								{
									back = 1;
								}
								else
								{
									ulang = 0;
								}
							}
							else
							{
								printf("Maaf..Kode Yang Anda Masukan Salah\n");
								printf("Apakah Anda Ingin Mengulanginya [Y/N]");
								scanf("%s", &ceweA);
								if (ceweA == 'Y' || ceweA == 'y')
								{
									ceweA = 1;
								}
								else
								{
									ulang = 0;
								}
							}
						} while (ceweA == 1);
					}
					else if (kamar == 2)
					{
						do
						{
							ceweB = 1;
							system("cls");
							printf("KAMAR PUTRI TIPE B   \n");
							printf("1.SEWA KAMAR         \n");
							printf("2.PERPANJANG SEWA    \n");
							printf("3.KEMBALI            \n");
							printf("Silahkan Masukan Menu Pilihan Anda [1..3]");
							scanf("%d", &sewa);
							if (sewa == 1)
							{
								printf("Sewa Kamar        :10.000.000\n");
								printf("Masukan Uang Anda :");
								scanf("%d", &uang);
								if (uang < putriB)
								{
									printf("Maaf...Saldo Anda Tidak Cukup Untuk Melakukan Transaksi Ini\n");
									printf("Harap Ulang Kembali [Y/N]");
									scanf("%s", &ceweB);
									system("cls");
									if (ceweB == 'y' || ceweB == 'Y')
									{
										ceweB = 1;
									}
									else
									{
										ceweB = 0;
									}
								}
								else if (uang >= putriB)
								{
									hasil = uang - putriB;
									printf("kembaliannya      :%d\n", hasil);
									printf("Apakah Anda Ingin Mengulanginya [Y/N] ");
									scanf("%s", &ceweB);
									system("cls");
									if (ceweB == 'y' || ceweB == 'Y')
									{
										ceweB = 1;
									}
								}
							}
							else if (sewa == 2)
							{
								system("cls");
								printf("perpanjang Sewa   :10.000.000\n");
								printf("Masukan Uang Anda : ");
								scanf("%d", &uang);
								if (uang < putriB)
								{
									printf("maaf Saldo Anda Tidak Cukup Untuk Melakukan Transaksi Ini\n");
									hasil1 = uang - putriB;
									printf("Uang Anda Kurang Sebanyak %d\n", hasil);
									printf("Harap Ulang Kembali [Y/N]");
									scanf("%s", &ceweB);
									system("cls");
									if (ceweB == 'y' || ceweB == 'Y')
									{
										back = 1;
									}
								}
								else if (uang >= putriB)
								{
									diskon = putriB * 0.05;
									hasil1 = putriB - diskon;
									total = uang - hasil1;
									printf("kembaliannya      :%d\n", total);
									printf("Apakah Anda Ingin Mengulanginya [Y/N] ");
									scanf("%s", &ceweB);
									system("cls");
									if (ceweB == 'y' || ceweB == 'Y')
									{
										ceweB = 1;
									}
									else
									{
										ceweB = 0;
									}
								}
							}
							else if (sewa == 3)
							{
								printf("Apakah Anda Yakin Ingin Kembali [Y/N]");
								scanf("%s", &ceweB);
								system("cls");
								if (ceweB == 'y' || ceweB == 'Y')
								{
									back = 1;
								}
								else
								{
									back = 0;
								}
							}
							else
							{
								printf("Maaf...Kode Yang Anda Masukan Salah/Tidak Terdaftar\n");
								printf("Apakah Anda Ingin Mengulanginya [Y/N]");
								scanf("%s", &ceweB);
								if (ceweB == 'Y' || ceweB == 'y')
								{
									ceweB = 1;
								}
								else
								{
									ceweB = 0;
								}
							}
						} while (ceweB == 1);
					}
					else if (kamar == 3)
					{
						do
						{
							ceweC = 1;
							system("cls");
							printf("KAMAR PUTRI TIPE C \n");
							printf("1.SEWA KAMAR       \n");
							printf("2.PERPANJANG SEWA  \n");
							printf("3.KEMBALI          \n");
							printf("Silahkan Masukan Menu Pilihan Anda [1..3]");
							scanf("%d", &sewa);
							if (sewa == 1)
							{
								printf("Sewa Kamar        :7.000.000\n");
								printf("Masukan Uang Anda :");
								scanf("%d", &uang);
								if (uang < putriC)
								{
									printf("Maaf...Saldo Anda Tidak Cukup Untuk Melakukan Transaksi Ini\n");
									hasil1 = uang - putraC;
									printf("Uang Anda Kurang Sebanyak :%d\n", hasil1);
									printf("Harap Ulang Kembali [Y/N]");
									scanf("%s", &ceweC);
									system("cls");
									if (ceweC == 'y' || ceweC == 'Y')
									{
										ceweC = 1;
									}
									else
									{
										ulang = 0;
									}
								}
								else if (uang >= putriC)
								{
									hasil = uang - putriC;
									printf("kembaliannya      :%d\n", hasil);
									printf("Apakah Anda Ingin Mengulanginya [Y/N] ");
									scanf("%s", &ceweC);
									system("cls");
									if (ceweC == 'y' || ceweC == 'Y')
									{
										ceweC = 1;
									}
									else
									{
										ulang = 0;
									}
								}
							}
							else if (sewa == 2)
							{
								printf("perpanjang Sewa   :7.000.000\n");
								printf("Masukan Uang Anda :");
								scanf("%d", &uang);
								if (uang < putriC)
								{
									printf("maaf Saldo Anda Tidak Cukup Untuk Melakukan Transaksi Ini\n");
									hasil1 = uang - putriC;
									printf("Maaf Uang Anda Kurang Sebanyak :%d\n", hasil1);
									printf("Harap Ulang Kembali [Y/N]");
									scanf("%s", &ceweC);
									system("cls");
									if (ceweC == 'y' || ceweC == 'Y')
									{
										ceweC = 1;
									}
									else
									{
										ulang = 0;
									}
								}
								else if (uang >= putriC)
								{
									diskon = putriC * 0.03;
									hasil1 = putriC - diskon;
									total = uang - hasil1;
								}
							}
							else if (sewa == 3)
							{
								printf("Apakah Anda Yakin Ingin Kembali [Y/N]");
								scanf("%s", &ceweC);
								system("cls");
								if (ceweC == 'y' || ceweC == 'Y')
								{
									back = 1;
								}
								else
								{
									ulang = 0;
								}
							}
						} while (ceweC == 1);
					}
					else if (kamar == 4)
					{
						printf("Apakah Anda Yakin Ingin Kembali [Y/N]");
						scanf("%s", &a);
						system("cls");
						if (a == 'y' || a == 'Y')
						{
							a = 1;
						}
						else
						{
							ulang = 0;
						}
					}
					else
					{
						printf("maaf...kode Yang Anda Masukan salah/tidak terdaftar\n");
						printf("apakah anda Ingin Mengulanginya [Y/N]");
						scanf("%s", &back);
						system("cls");
						if (back == 'y' || back == 'Y')
						{
							back = 1;
						}
						else
						{
							ulang = 0;
						}
					}
				} while (x == 1);
				break;
			case 3:
				system("cls");
				printf("============================================\n");
				printf("PROGRAM INI DIBUAT OLEH ***** :D :) :V :O o_o\n");
				printf("================[COPYRIGHT]=================\n");
				printf("\nApakah Anda Ingin Kembali[Y/N]");
				scanf("%s", &ulang);
				system("cls");
				if (ulang == 'Y' || ulang == 'y')
				{
					ulang = 1;
				}
				else
				{
					ulang = 0;
				}
				break;
			case 0:
				ulang = 0;
				break;
			default:
				printf("maaf...kode Yang Anda Masukan salah/tidak terdaftar\n");
				printf("apakah anda Ingin Mengulanginya [Y/N]");
				scanf("%s", &ulang);
				system("cls");
				if (ulang == 'y' || ulang == 'Y')
				{
					ulang = 1;
				}
				else
				{
					ulang = 0;
				}
			}
		}
		else
		{
			printf("maaf Password Salah");
		}
	} while (ulang == 1);
	return 0;
}
