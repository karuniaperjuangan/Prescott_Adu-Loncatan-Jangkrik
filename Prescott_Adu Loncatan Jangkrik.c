/* Adu Loncatan Jangkrik */
/* Kelompok Prescott */

#include <stdio.h>

int main()
{
	int x1,v1,x2,v2,count=0;
	printf("Masukkan nilai X1, V1, X2, V2\n");
	scanf("%d %d %d %d",&x1,&v1,&x2,&v2); 
	printf("\nLetak Awal Jangkrik 1 : %d",x1);
	printf("\nPanjang Lompatan Jangkrik 1 : %d",v1);
	printf("\nLetak Awal Jangkrik 2 : %d",x2);
	printf("\nPanjang Lompatan Jangkrik 2 : %d",v2);
//Menghitung berapa kali bertemu dalam waktu yang sama
//Batasan 0 <= X <= 10^3 , 	1 <= V <= 10^3
while(x1 <= 1000 && x2 <= 1000){ //Mengulang-ulang lompatan sampai posisi X1 atau X2 lebih dari 1000
	if(x1==x2){count++; //Ketika bertemu, count bertambah 1
	};
	x1=x1+v1; //Jangkrik 1 meloncat dengan pertambahan posisi V1 
	x2=x2+v2; //Jangkrik 2 meloncat dengan pertambahan posisi V2
	
};
if(count>0){printf("\n\nOutput: YES"); // Jika bertemu lebih dari 0 kali (count>0), output adalah yes
}
else{printf("\n\nOutput: NO"); // Jika belum pernah bertemu (count<=0), output adalah no
};
return 0;
}
