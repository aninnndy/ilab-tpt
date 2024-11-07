#include <stdio.h>
#include <string.h>

int main()
{
    // Mendeklarasikan string nama dengan tipe data char
    char* nama = "Nadi Mirwan Fatheen";
    
    // Mendeklarasikan string huruf dengan tipe data char
    char huruf;
    
    char* hasil;

    // Menginputkan huruf yang akan dicari dari nama
    scanf(" %c", &huruf);
    printf("Masukkan huruf yang akan dicari:");
    printf("\n");
    printf("Mencari huruf '%c' dalam nama '%s' \n", huruf, nama);
    
    // Mencari huruf
    hasil = strchr(nama, huruf);

    while(hasil != NULL) {
        printf("Ditemukan pada huruf ke-%ld\n", hasil - nama+1);
        hasil = strchr(hasil+1, huruf);
    }
}
