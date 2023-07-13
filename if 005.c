#include <stdio.h>

int main() {
    int x, y;
    scanf("%d%d", &x, &y);
    if (x*0.6>y) printf("DA");
    else printf("NE");
    return 0;
}
