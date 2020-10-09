/*Kotak Melalui Terowongan */
/*Prescott*/

#include <stdio.h>

//Membuat structure square yang berisi panjang, lebar, tinggi, volume
struct square{
	int panjang,lebar,tinggi,volume;
};

int  main(){
	int n,i; //Mendeklarasi integer
	printf("Berapa jumlah kotak yang ingin lewat terowongan\?\n");
	scanf("%d",&n); //Memasukkan banyaknya kotak
	struct square kotak[n]; //Mendefinisikan array kotak
	for(i=0;i<=n-1;i++){  //Untuk mengulang-ulang penghitungan volume
		scanf("%d %d %d", //Menginput panjang, lebar, tinggi
		&kotak[i].panjang,
		&kotak[i].lebar,
		&kotak[i].tinggi);
		kotak[i].volume= kotak[i].panjang*kotak[i].lebar*kotak[i].tinggi; //Menghitung volume
		
	};
	printf("Output:");
	for(i=0;i<=n-1;i++){ //Mengulang-ulang proses output volume

		if(kotak[i].tinggi<41){ //Jika tinggi kurang dari 41, maka output akan keluar. Jika lebih, tidak tampil
		printf("\n%d",kotak[i].volume);
		}

	};
	return 0;

	
}
