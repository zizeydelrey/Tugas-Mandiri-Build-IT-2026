
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    long long a, b, c, simpan;
    scanf ("%lld %lld %lld", &a, &b, &c);
    
    
    
    if (a > b) {
        simpan = a;
        a = b;
        b = simpan;
    } if (a > c){
        simpan = a;
        a = c;
        c =  simpan;
    } if (b > c ){
        simpan = b;
        b = c;
        c = simpan;
    } if (a == b || b == c){
        printf("0");
    }else if ((b - a) <= (c - b)){
        printf("%lld", b - a);
    }else printf("%lld", (c - b));
        
    return 0;
    }