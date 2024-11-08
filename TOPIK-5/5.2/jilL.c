#include <stdio.h>


int main()
{
    // Mendeklarasikan string s2 dan beri variabel yang sesuai
    char s2[4] = "jill";
    s2[2] = toupper (s2[2]);

    // Mencetak string s2
    printf("%s\n", s2);

return 0;
}
