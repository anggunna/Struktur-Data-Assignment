#include <stdio.h>

struct Kucing
{
    const char *nama;
    const char *ras;
    int umur;
};

int main()
{
    struct Kucing cat1, cat2, cat3;
    cat1.nama = "Anya";
    cat1.ras  = "Domestik";
    cat1.umur = 2;

    cat2.nama = "Leo";
    cat2.ras  = "Siberian";
    cat2.umur = 3;

    cat3.nama = "Lilia"; 
    cat3.ras  = "Persia"; 
    cat3.umur = 1;
    
    printf("## Cat 1 ##\n");
    printf("Nama: %s\n", cat1.nama);
    printf("Ras : %s\n", cat1.ras);
    printf("Umur: %d\n", cat1.umur);
    printf("## Cat 2 ##\n");
    printf("Nama: %s\n", cat2.nama);
    printf("Ras: %s\n",  cat2.ras);
    printf("Umur: %d\n", cat2.umur);
    printf("## Cat 3 ##\n");
    printf("Nama: %s\n", cat3.nama);
    printf("Ras : %s\n", cat3.ras);
    printf("Umur: %d\n", cat3.umur);
    return 0;
}
