#include <stdio.h>
int main () {
    int pass, rahasia = 432;
    printf("Masukkan kata sandi: ");
    printf("Masukkan pass: ");
    scanf("%d", &pass);
    if (pass == rahasia) {
        printf("Login berhasil");
    }
    return 0;
}