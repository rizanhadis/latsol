// #include <stdio.h>
// #include <ctype.h>
// #include <string.h>

// #define NAMA "agus"
// const char PWD[] = "123";
// int main (){
//     char nama_user[4], password[3];
//     printf("input nama user = ");scanf("%s", nama_user);
//     printf("input password = ");scanf("%s", password);

//     if(strcmp(nama_user, PWD) == 0 && strcmp(password, NAMA) == 0)
//     printf("Login sukses \n");
//     else
//     printf("User atau Password salah \n");

//     // system("pause");
//     return 0;
// }

#include <stdio.h>

int main() {
    int gol[10];
    int i;
    char pangkat[4][10] = {"Juru", "Pengatur", "Penata", "Pembina"};

    for (i = 0; i < 10; i++) {
        do {
            printf("Input golongan ke-%d = ", i + 1);
            if (scanf("%d", &gol[i]) != 1) {
                printf("Invalid input. Please enter a number.\n");
                while (getchar() != '\n'); // Clear the input buffer
            }
        } while (gol[i] < 1 || gol[i] > 4); 
    }

    for (i = 0; i < 10; i++) {
        if (gol[i] % 2 == 0) {
            printf("Golongan %d, pangkat = %s\n", gol[i], pangkat[gol[i] - 1]);
        } else {
            printf("Golongan %d, pangkat = %s\n", gol[i], pangkat[gol[i] - 1]);
        }
    }

    // system("pause"); // This is non-standard, better to use a platform-specific method
    return 0;
}
























