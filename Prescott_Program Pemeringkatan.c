#include <stdio.h>

//DEKLARASI VARIABEL
int jumlah_mahasiswa, jumlah_matkul;

//STRUKTUR SETIAP MAHASISWA
struct student
{
    char nama[50];  //Nama Mahasiswa tidak boleh menggunakan spasi
    double matkul[15]; //Nilai mata kuliah maks. ada 15 (skala 0-100)
    double rerata;   //rerata dari setiap mahasiswa
};

int main()
{
    //JUDUL BIAR KEREN
    printf("******************* PEMERINGKATAN MAHASISWA *******************\n");

    //INPUT JUMLAH MAHASISWA DAN JUMLAH MATKUL
    printf("Masukkan jumlah mahasiswa   : ");
    scanf("%d", &jumlah_mahasiswa);
    struct student mahasiswa[jumlah_mahasiswa+1];
    printf("Masukkan jumlah mata kuliah : ");
    scanf("%d", &jumlah_matkul);

    //INPUT DATA SETIAP MAHASISWA
    int i,j;
    for(i=0; i<jumlah_mahasiswa; i++){
        double sum = 0;
        printf("\n------------------------MAHASISWA ke-%d------------------------\n", i+1);
        printf("Masukkan nama mahasiswa    : ");
        scanf("%s", &mahasiswa[i].nama);
        for(j=0; j<jumlah_matkul; j++){
            printf("Masukkan nilai matkul ke-%d : ", j+1);
            scanf("%lf", &mahasiswa[i].matkul[j]);
            sum += mahasiswa[i].matkul[j];
        }
        mahasiswa[i].rerata = sum / jumlah_matkul;
    }

    //ALGORITMA PEMERINGKATAN
    ulang:
    for(i=0; i<jumlah_mahasiswa-1; i++){
        if(mahasiswa[i].rerata < mahasiswa[i+1].rerata){
            mahasiswa[jumlah_mahasiswa] = mahasiswa[i];
            mahasiswa[i] = mahasiswa[i+1];
            mahasiswa[i+1] = mahasiswa[jumlah_mahasiswa];
        }
    }

    //PENGECEKAN URUTAN
    for(i=0; i < jumlah_mahasiswa-1; i++){
        if(mahasiswa[i].rerata < mahasiswa[i+1].rerata){
            goto ulang;
        }
    }

    //ALGORITMA PENCETAKAN
    printf("\n>>>>>>>>>>>>>>>>>>>> HASIL PEMERINGKATAN <<<<<<<<<<<<<<<<<<<<<<\n\n");
    for(i=0; i < jumlah_mahasiswa; i++){
        printf("%d) %s, rata-rata = %f \n", i+1, mahasiswa[i].nama, mahasiswa[i].rerata);
    }

    return 0;
}
