#include <stdio.h>
#include <stdlib.h>

int main()
{
     // Deklarasi variabel hasil, a, dan i bertipe integer
     int hasil, a, i;

     // Menugaskan hasil dengan satu
     hasil = 1;

     // Mencetak kalimat input bilangan
     printf("Input bilangan: \n");

     // Membaca input dari keyborad dan tugaskan pada variabel a
     scanf("%d", &a);

     /*
     Statement for dengan menugaskan i dengan 1,
     seleksi kondisi i kurang dari sama dengan a,
     i increment
     */
     for (i = 1; i <= a; i++)
     {
          // Menugaskan hasil dengan evaluasi i dikalikan hasil
          hasil = hasil * i;
     }
     // Mencetak hasil
     printf("faktorial dari %d! adalah %d\n", a, hasil);

     return 0;
}
