#include <stdio.h>

int main() {
    int a, br_zn, sum, prva, zadnja;     
    float srednja;                                   
    scanf("%d", &a);
    srednja = a / 10 % 10; 
    if (a % 2 == 0) printf("paran\n");
    else printf("neparan\n");
    
    switch(a) {
        case 1 ... 9: 
            br_zn = 1;
            sum = a;
            prva = a;
            zadnja = a;
            break;
        case 10 ... 99:
            br_zn = 2;
            sum = a % 10 + a / 10;
            prva = a / 10;
            zadnja = a % 10;
            break;
        case 100 ... 999:
            br_zn = 3;
            prva = a / 100;
            zadnja = a % 10;
            sum = prva + srednja + zadnja;
            break;
    }
    
    printf("Broj znamenki: %d, ", br_zn);
    printf("Suma zn: %d, ", sum);
    printf("Zadnja: %d, ", zadnja);
    printf("prva: %d\n", prva);
    
    return 0;
}
