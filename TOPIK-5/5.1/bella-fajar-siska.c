#include <stdio.h>

int main() {
    printf("Nama\t\tNilai\n");
    char *data_mhs[3][2] =
    {
      {"Bella", "A"},
      {"Siska", "B"},
      {"Fajar", "A"},
    }
  
// Tampilkan nilai mahasiswa
int i, j;
for(i = 0; i < 3; i++) {
  for (j = 0; j < 2; j++) {
    // Mencetak nilai dari variabel dataMhs
      printf("%s\t\t", data_mhs[i],[j]);
  }
  printf("\n");
}

  return 0;
  
}
