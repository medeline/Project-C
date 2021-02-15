#include <stdio.h>

int main(){
enum namaHari{minggu, senin, selasa, rabu, kamis, jumat, sabtu};
enum namaHari sekarang;
printf("%d", minggu);
printf("%d", senin);
printf("%d", selasa);
printf("%d", rabu);
printf("%d", kamis);
printf("%d", jumat);
printf("%d", sabtu);
sekarang=sabtu;
printf("\n");
printf("hari ini adalah hari= %d", sekarang);

int hari;
printf("\n\nMasukkan Nomor Hari= ");
scanf("%d", &hari);
if(hari==senin){
printf("\nHari Senin");
}

if(hari==selasa){
printf("\nHari Selasa");
}

if(hari==rabu){
printf("\nHari Rabu");
}
if(hari==kamis){
printf("\nHari Kamis");
}
if(hari==jumat){
printf("\nHari Jumat");
}
if(hari==sabtu){
printf("\nHari Sabtu");
}
if(hari==minggu){
printf("\nHari Minggu");
}

printf("\nCoba Enumerisasi Jenis Kelamin\n");
enum jenisKelmain{pria=10, wanita=20};
printf("%d", pria);
printf("%d", wanita);
return 0;

}
