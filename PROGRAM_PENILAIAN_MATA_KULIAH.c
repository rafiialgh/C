#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct Grade {
    float PRESENT;
    float ASSIGNMENT;
    float QUIZ;
    float FORUM;
    float FINAL_EXAM;

};

int main() {

    struct Grade grade;
    char CHKNIM[20];
    char CHKNAME[40];
    char CHKCOURSE[40];
    char SELECT1[5];
    bool EXIT = false;
    bool CHK1 = false;
    bool CHK2 = false;
    int SELECTION;

    
    do { 

        printf("=============================\n");
        printf("PROGRAM NILAI AKHIR MAHASISWA\n");
        printf("\n");
        printf("Pilihan Menu: \n");
        printf("1. Input Data Mahasiswa: \n");
        printf("2. Input Nilai: \n");
        printf("3. Lihat Nilai dan Status: \n");
        printf("4. Exit \n");
        printf("Pilihan Anda: ");
        scanf("%d", &SELECTION);

        if (SELECTION == 1) {

            char NIM[10];
            char NAME[40];
            char COURSE[40];
            char SELECT2[5];
            int CHK_NIM, CHK_NAME, CHK_SELECT;

            printf("===== Input Data =====\n");
            printf("Masukkan Nim Anda: ");
            scanf("%s", NIM);
            printf("Masukkan Nama Anda: ");
            gets(NAME);
            gets(NAME);
            printf("Masukkan Mata Kuliah: ");
            gets(COURSE);
            
            //string comparisson untuk mengecek ada nim atau nama yang sama atau tidak 
            CHK_NAME = strcmp(CHKNAME, NAME);
            CHK_NIM = strcmp(CHKNIM, NIM);
            if (CHK_NAME == 0 || CHK_NIM == 0) {

                strcpy(SELECT1, "Y");
                printf("Nim atau Nama Yang Anda Masukkan Sudah Digunakan\n");
                printf("Apakah Anda Ingin Merubahnya? (Y/T): ");
                gets(SELECT2);
                
                CHK_SELECT = strcmp(SELECT1, SELECT2);
                if (CHK_SELECT == 0) {

                    strcpy(CHKNIM, NIM);
                    strcpy(CHKNAME, NAME);
                    strcpy(CHKCOURSE, COURSE);
                    printf("Data Berhasil Dirubah\n");

                } else {

                    printf("Tidak Ada Perubahan Data\n");

                }
            

            } else {

                strcpy(CHKNIM, NIM);
                strcpy(CHKNAME, NAME);
                strcpy(CHKCOURSE, COURSE);

            } 
                CHK2 = true; //untuk menandai jika menu input data sudah diisi
                printf(" \n");
                printf(" \n");
                
        } else if (SELECTION == 2) {

            if (CHK2 != true) { //jika menu input data belum diisi atau CHK2 = false

                printf("===== Menu Input Nilai =====");
                printf("Belum Ada Data Yang Diinput. Silahkan Input Data Anda Terlebih Dahulu Pada Menu 1\n");

            } else {

                printf("===== Menu Input Nilai ====\n");
                printf("Masukkan Nilai Hadir: ");
                scanf("%f", &grade.PRESENT);
                printf("Masukkan Nilai Tugas: ");
                scanf("%f", &grade.ASSIGNMENT);
                printf("Masukkan Nilai Quiz: ");
                scanf("%f", &grade.QUIZ);
                printf("Masukkan Nilai Keaktifan Forum: ");
                scanf("%f", &grade.FORUM);
                printf("Masukan Nilai UAS: ");
                scanf("%f", &grade.FINAL_EXAM);

                CHK1 = true; //untuk menandai jika menu input nilai sudah diisi
                printf("Nilai Sudah Diinputkan\n");

            }

            printf(" \n");
            printf(" \n");

        } else if (SELECTION == 3) {

            float FINAL_SCORE;
            char STATUS1[5] = "Lulus";
            char STATUS2[12] = "Tidak Lulus";
            if (CHK1 != true) { //jika menu input nilai belum diisi atau CHK1 = false

                
                printf("Belum Ada Nilai Yang Dimasukan. Silahkan Input Nilai Anda Terlebih Dahulu Pada Menu 2\n");
                
            } else {

                printf("===== Menu Info Nilai =====\n");
                printf("Nim: %s", CHKNIM);
                printf("\nNama: %s", CHKNAME);
                printf("\nMata Kuliah: %s", CHKCOURSE);

                FINAL_SCORE = grade.PRESENT * 0.10 + grade.ASSIGNMENT * 0.20 + grade.QUIZ * 0.10 + grade.FORUM * 0.10 + grade.FINAL_EXAM * 0.50;
                if (FINAL_SCORE >= 90 && FINAL_SCORE <= 100) {

                    char GRADE = 'A';
                    printf("\nNilai Akhir: %.2f", FINAL_SCORE);
                    printf("\nGrade: %c", GRADE);
                    printf("\nStatus: %s", STATUS1);
                
                } else if (FINAL_SCORE >= 80 && FINAL_SCORE <= 89) {

                    char GRADE = 'B';
                    printf("\nNilai Akhir: %.2f", FINAL_SCORE);
                    printf("\nGrade: %c", GRADE);
                    printf("\nStatus: %s", STATUS1);

                } else if (FINAL_SCORE >= 70 && FINAL_SCORE <= 79) {

                    char GRADE = 'C';
                    printf("\nNilai Akhir: %.2f", FINAL_SCORE);
                    printf("\nGrade: %c", GRADE);
                    printf("\nStatus: %s", STATUS1);

                } else if (FINAL_SCORE >= 60 && FINAL_SCORE <= 69) {

                    char GRADE = 'D';
                    printf("\nNilai Akhir: %.2f", FINAL_SCORE);
                    printf("\nGrade: %c", GRADE);
                    printf("\nStatus: %s", STATUS1);

                } else if (FINAL_SCORE >= 50 && FINAL_SCORE <= 59) {

                    char GRADE = 'E';
                    printf("\nNilai Akhir: %.2f", FINAL_SCORE);
                    printf("\nGrade: %c", GRADE);
                    printf("\nStatus: %s", STATUS2);

                } else {

                    printf("\nTidak Ada Grade (Nilai Terlalu Rendah)");

                }
            
            }

                printf(" \n");
                printf(" \n");

        } else if (SELECTION == 4) {

            EXIT = true;

        } else {

            printf("Data Yang Anda Masukkan Salah, Silahkan Input Kembali\n");
        }
        

    } while (EXIT != true);

    return 0;

}

