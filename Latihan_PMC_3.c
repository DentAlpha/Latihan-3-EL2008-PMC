#include <stdio.h>

/*
Nama : Surya Dharma
NIM  : 13220027
*/

/*Asumsi input sesuai dengan tipe data yang diminta
*/

struct mahasiswa {
    char nama[50];
    int nim;
    int kehadiran;
};

int main()
{
    int N;
    printf("Jumlah mahasiswa : ");
    scanf("%d", &N);

    if(N < 1){
        printf("Input jumlah mahasiswa tidak valid!");
    }
    else{
        struct mahasiswa kelas[N];

        for (int i = 0; i < N; i++){
            printf("Nama siswa : ");
            scanf("%s", &kelas[i].nama);
            printf("NIM siswa : ");
            scanf("%d", &kelas[i].nim);
            printf("Kehadiran (dalam persen) : ");
            scanf("%d", &kelas[i].kehadiran);
            while(kelas[i].kehadiran < 0 || kelas[i].kehadiran > 100){
                printf("\nPersen kehadiran tidak valid!\nKehadiran (dalam persen) : ");
                scanf("%d", &kelas[i].kehadiran);
            }
        }
        printf("\nDaftar mahasiswa yang kehadirannya dibawah 80% : \n\n");

        for (int i = 0; i < N; i++){
                if(kelas[i].kehadiran < 80){
                    printf("Nama : %s NIM : %d\n", kelas[i].nama, kelas[i].nim);
                }
        }

    }

    return 0;
}
