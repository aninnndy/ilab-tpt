// Program perhitungan penjumlahan angka1 dan angka2
// header stdio.h
#include <stdio.h>

// Fungsi main untuk memulai eksekusi program
int main()
{
     printf("Masukkan 2 angka untuk dihitung: \n"); // Mencetak output kalimat

     // Deklarasi variabel angka1 dan angka2 dengan tipe data integer
     int angka1, angka2;

     // Deklarasi variabel penjumlahan dan pengurangan dengan tipe data integer
     int penjumlahan, pengurangan;

     // Membaca input variabel angka1 dan angka2
     scanf("%d %d", &angka1, &angka2);

     // Menghitung nilai penjumlahan dan pengurangan dari variabel angka1 dan angka2
     penjumlahan = angka1 + angka2;
     pengurangan = angka1 - angka2;

     // Menampilkan hasil penjumlahan
     printf("Hasil penjumlahan 2 bilangan: %d\n", penjumlahan);

     // Menampilkan hasil pengurangan
     printf("Hasil pengurangan 2 bilangan: %d\n", pengurangan);

     return 0; // Menentukan nilai balik
} // Mengakhiri fungsi main()
