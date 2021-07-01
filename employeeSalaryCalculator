#include <stdio.h> 
#include <math.h>
#include <stdlib.h>
#include <string.h> //line 1-4: fungsi library untuk program ini  

int main(){

    char nama[50], golongan_pendidikan[10];
    int golongan_jabatan, jumlah_jam_kerja;
    long int  gaji = 2000000, lembur_per_jam = 3000, honor_lembur, tunjangan_jabatan, tunjangan_pendidikan, total_gaji; //line 8-10: pendeklarasian


    printf("Nama Karyawan: ");
    scanf("%s", nama); 
    printf("Golongan Jabatan: ");
    scanf("%d", &golongan_jabatan);
    printf("Pendidikan: ");
    scanf("%s", golongan_pendidikan);
    printf("Jumlah Jam Kerja: ");
    scanf("%d", &jumlah_jam_kerja); //line 13-20: input data dari user

    if (golongan_jabatan == 1){
        tunjangan_jabatan = 5 * gaji / 100;
    }
    else if (golongan_jabatan == 2){
        tunjangan_jabatan = 10 * gaji /100;
    }
    else if (golongan_jabatan == 3){
        tunjangan_jabatan = 15 * gaji / 100;
    } //line 22-30: if else statement untuk golongan jabatan

    if ((strcmp(golongan_pendidikan, "sma") == 0) || (strcmp(golongan_pendidikan, "SMA") == 0)){
        tunjangan_pendidikan = 2.5 * gaji / 100;
    }
    else if ((strcmp(golongan_pendidikan, "d3") == 0) || (strcmp(golongan_pendidikan, "D3") == 0)){
        tunjangan_pendidikan = 5 * gaji / 100;
    }
    else if ((strcmp(golongan_pendidikan, "s1") == 0) || (strcmp(golongan_pendidikan, "S1") == 0)){
        tunjangan_pendidikan = 10 * gaji / 100;
    } //line 32-40: if else statement untuk golongan pendidikan
    
    if (jumlah_jam_kerja > 160){
        honor_lembur = (jumlah_jam_kerja - 160) * lembur_per_jam; 
    }
    else if (jumlah_jam_kerja <= 160){
        honor_lembur = jumlah_jam_kerja * 0;
    } //line 42-47: if else statement untuk jam lembur, dengan asumsi 5 hari kerja 4 minggu dalam sebulan, 8jam x 5hari x 4minggu = 160jam

    total_gaji = tunjangan_jabatan + tunjangan_pendidikan + honor_lembur + gaji; //total gaji

    printf("===================================");
    printf("\nNama Karyawan: %s \n", nama);
    printf("   Tunjangan Jabatan: Rp. %ld \n", tunjangan_jabatan);
    printf("   Tunjangan Pendidikan: Rp. %ld \n", tunjangan_pendidikan);
    printf("   Honor Lembur: Rp. %ld \n", honor_lembur);
    printf("Total Gaji: Rp. %ld \n", total_gaji);
    //line 51-56: output program

return(0);

}
