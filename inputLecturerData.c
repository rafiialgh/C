#include <stdio.h>

struct dateOfBirth {

    int date;
    int month;
    int year;

};

struct address {

    char street[100];
    int houseNum;
    char city[20];
    char province[20];

};

typedef struct lecturerData {

    int lecNum;
    char nidn[30];
    char name[50];
    struct address adrs;
    char placeOfBirth[20];
    struct dateOfBirth dof;

} Lecturer;

int main(void) {

    int rept = 0;
    const int total = 5;
    Lecturer lct[5];

    puts("Program Input Data Dosen");
    
    do {

        lct[rept].lecNum = rept+1;
        printf("Masukan NIDN: ");
        scanf(" %[^\n]", &lct[rept].nidn);
        printf("Masukan Nama: ");
        scanf(" %[^\n]", &lct[rept].name);
        printf("Masukan Nama Jalan: ");
        scanf(" %[^\n]", &lct[rept].adrs.street);
        printf("Masukan Nomor Rumah: ");
        scanf("%d", &lct[rept].adrs.houseNum);
        printf("Masukan Kota: ");
        scanf(" %[^\n]", &lct[rept].adrs.city);
        printf("Masukan Provinsi: ");
        scanf(" %[^\n]", &lct[rept].adrs.province);
        printf("Masukan Tempat Lahir: ");
        scanf(" %[^\n]", &lct[rept].placeOfBirth);
        printf("Masukan Tanggal Lahir (dd/mm/yyyy): ");
        scanf("%d/%d/%d", &lct[rept].dof.date, &lct[rept].dof.month, &lct[rept].dof.year);
        puts("===============================================");
        printf(" Data ke-%d berhasil dicatat\n", rept+1);
        puts("===============================================");
        rept += 1;

    } while (rept < 5);
    puts ("Terima kasih sudah memasukan data dosen");
    puts("===============================================");

    printf("Data dosen yang anda masukan yaitu:\n");
    for (int i = 0; i < 5; i++) {
        
        printf("%d. NIDN: %s\n", lct[i].lecNum, lct[i].nidn);
        printf("   Nama: %s\n", lct[i].name);
        printf("   Alamat: %s, No. %d, %s, %s\n", lct[i].adrs.street, lct[i].adrs.houseNum, lct[i].adrs.city, lct[i].adrs.province);
        printf("   Tempat dan Tanggal Lahir: %s, %d/%d/%d\n", lct[i].placeOfBirth, lct[i].dof.date, lct[i].dof.month, lct[i].dof.year);

    }

    return 0;

}