#include <stdio.h>

/*
Nama : Surya Dharma
NIM  : 13220027
*/

struct mahasiswa {
    char nama[50];
    int nim;
    int kehadiran;
};

void main()
{
    int N;
    printf("Jumlah mahasiswa : ");
    scanf("%d", &N);

    struct mahasiswa kelas[N];

    for (int i = 0; i < N; i++){
        printf("Nama siswa : ");
        scanf("%s", &kelas[i].nama);
        printf("NIM siswa : ");
        scanf("%d", &kelas[i].nim);
        printf("Kehadiran (dalam persen) : ");
        scanf("%d", &kelas[i].kehadiran);
    }
    printf("\nDaftar mahasiswa yang kehadirannya dibawah 80% : \n\n");

    for (int i = 0; i < N; i++){
            if(kelas[i].kehadiran < 80){
                printf("Nama : %s NIM : %d\n", kelas[i].nama, kelas[i].nim);
            }
    }
}
