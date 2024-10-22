// Program perhitungan aritmatika
#include <stdio.h>

// Fungsi main untuk memulai eksekusi program
int main()
{
     printf("Masukkan 3 angka: \n"); // Mencetak kalimat

     // Deklarasi variabel x, y, dan z dengan tipe data integer
     int x, y, z;

     // Deklarasi variabel perkalian, penjumlahan, dan pengurangan
     int perkalian, penjumlahan, pengurangan;

     // Membaca input variabel x, y, dan z
     scanf("%d %d %d", &x, &y, &z);

     // Menghitung nilai perkalian, penjumlahan, dan pengurangan dari variabel x, y, dan z
     penjumlahan = x + y + z;
     perkalian = x * y * z;
     pengurangan = x - y - z;

     // Cetak output dengan memanggil variabel
     printf("Hasil penjumlahan 3 bilangan: %d\n", penjumlahan);
     printf("Hasil perkalian 3 bilangan: %d\n", perkalian);
     printf("Hasil pengurangan 3 bilangan: %d\n", pengurangan);

     return 0; // Menentukan nilai balik
} // Mengakhiri fungsi main()
