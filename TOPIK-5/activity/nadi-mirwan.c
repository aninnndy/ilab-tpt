#include <stdio.h>
#include <string.h>

int main() {
    // Mendeklarasikan string nama dengan tipe data char
    char* nama = "Nadi Mirwan Fatheen";
    
    // Mendeklarasikan string huruf dengan tipe data char
    char huruf;
    
    // Mendeklarasikan pointer untuk hasil pencarian
    char* hasil;

    // Menginputkan huruf yang akan dicari dari nama
    printf("Masukkan huruf yang akan dicari: ");
    scanf("%c", &huruf);
    
    // Menangani newline karakter yang ditinggalkan oleh scanf
    getchar(); 

    printf("\nMencari huruf '%c' dalam nama '%s' \n", huruf, nama);
    
    // Mencari huruf pertama kali
    hasil = strchr(nama, huruf);

    // Mencari huruf dalam nama dan menampilkan posisi
    while (hasil != NULL) {
        printf("Ditemukan pada huruf ke-%ld\n", hasil - nama + 1);
        hasil = strchr(hasil + 1, huruf); // Cari lagi setelah posisi saat ini
    }

    return 0;
}
