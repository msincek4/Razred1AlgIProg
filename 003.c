#include <stdio.h>
#include<math.h>
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d : %d = %.3f\n", a, b, (float)a / b);
    printf("Aritmeticka sredina %.3f\n", (float)(a + b) / 2);
    printf("Geometrijska sredina %.3f\n", sqrt(a*b));
    return 0;
}






