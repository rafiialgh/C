#include <stdio.h>

typedef struct Date
{
    int DAY;
    int MONTH;
    int YEAR;
} DATE;

int Compare (DATE DT, char OPT, int DAY, int MONTH) {

    if (OPT == '<') {
        if (DT.MONTH == MONTH) {
            if (DT.DAY <= DAY) {
                return 1;
            } else {
                return 0;
            }
        } else if (DT.MONTH < MONTH) {
            return 1;
        } else {
            return 0;
        }
    } else if (OPT == '>') {
        if (DT.MONTH == MONTH) {
            if (DT.DAY >= DAY) {
                return 1;
            } else {
                return 0;
            }
        } else if (DT.MONTH > MONTH) {
            return 1;
        } else {
            return 0;
        }
    }

};

int display (char NAME[50], char ZODIAK[15], DATE DT) {

    printf("Nama: %s\n", NAME);
    printf("Bintang: %s\n", ZODIAK);
    printf("Tanggal Lahir: %d/%d/%d\n", DT.DAY, DT.MONTH, DT.YEAR);
    return 0;

}

int main(void) {

    DATE DT;
    char NAME[50], OPTION;

    puts("===== Program Untuk Mengetahui Zodiak =====");
    do {

        printf("Masukan Nama: ");
        scanf("%[^\n]", &NAME);
        printf("Masukan Tanggal Lahir (dd/mm/yyyy): ");
        scanf("%d/%d/%d", &DT.DAY, &DT.MONTH, &DT.YEAR);

        puts("===========================================");
        if (Compare(DT, '>', 21, 3) && Compare(DT, '<', 19, 4)) {
            display(NAME, "Aries", DT);
        } else if (Compare(DT, '>', 20, 4) && Compare(DT, '<', 20, 5)) {
            display(NAME, "Taurus", DT);
        } else if (Compare(DT, '>', 21, 5) && Compare(DT, '<', 20, 6)) {
            display(NAME, "Gemini", DT);
        } else if (Compare(DT, '>', 21, 6) && Compare(DT, '<', 22, 7)) {
            display(NAME, "Cancer", DT);
        } else if (Compare(DT, '>', 23, 7) && Compare(DT, '<', 22, 8)) {
            display(NAME, "Leo", DT);
        } else if (Compare(DT, '>', 23, 8) && Compare(DT, '<', 22, 9)) {
            display(NAME, "Virgo", DT);
        } else if (Compare(DT, '>', 23, 9) && Compare(DT, '<', 22, 10)) {
            display(NAME, "Libra", DT);
        } else if (Compare(DT, '>', 23, 10) && Compare(DT, '<', 21, 11)) {
            display(NAME, "Scorpio", DT);
        } else if (Compare(DT, '>', 22, 11) && Compare(DT, '<', 21, 12)) {
            display(NAME, "Sagitarius", DT);
        } else if (Compare(DT, '>', 20, 1) && Compare(DT, '<', 18, 2)) {
            display(NAME, "Aquarius", DT);
        } else if (Compare(DT, '>', 19, 2) && Compare(DT, '<', 20, 3)) {
            display(NAME, "Pisces", DT);
        } else {
            display(NAME, "Tidak Diketahui", DT);
        } 

        printf("Apakah anda ingin mencoba lagi? (y/n): "); 
        scanf("%c", &OPTION);

    } while (OPTION == 'y' || OPTION == 'Y');
   
    return 0;
}
