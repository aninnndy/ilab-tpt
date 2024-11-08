#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    // Deklarasikan string nama dengan tipe data char dan alokasi memori untuk 50 karakter
    char nama[50];
    
    // Menginputkan nama yang akan dicetak
    fgets(nama, sizeof(nama), stdin);
    // Mengubah string menjadi huruf kecil
        nama[0] = tolower(nama[0]); 

    // Menampilkan hasil setelah semua karakter diubah menjadi huruf kecil
    printf("Masukkan nama: \n%s\n", nama);
    
    return 0;
}
