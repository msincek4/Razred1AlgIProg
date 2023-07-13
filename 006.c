#include <stdio.h>

int main() {
    int broj, z12, z34, z56;
    scanf("%d", &broj);
    z56=broj%100;
    broj=broj/100;
    z34=broj%100;
    broj=broj/100;
    z12=broj%100;
    printf("%d %d %d", z12, z34, z56);
    return 0;
}
