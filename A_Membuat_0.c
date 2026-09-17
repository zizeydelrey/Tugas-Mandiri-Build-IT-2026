#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int jumlah;
    long long hasil = 0;
    scanf("%d", &jumlah);
    
    for (int i = 0; i < jumlah; i++) {
        long long angka;
        scanf("%lld", &angka);
        
        hasil = hasil + angka;

    } 
    
        printf("%lld", llabs(hasil));

    return 0;
}
