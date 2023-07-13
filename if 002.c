#include<stdio.h>
int main()
{
    int UV;
    scanf("%d", &UV);
    switch(UV){
case 1:
        case 2:
            printf("Niska opasnost");break;
        case 3:
        case 4:
        case 5:
            printf("Umjerena opasnost");break;
        case 6:
        case 7:
            printf("Visoka opasnost");break;
        case 8:
        case 9:
        case 10:
            printf("Vrlo visoka opasnost");break;
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
            printf("Ekstremna opasnost");break;
    }
    return 0;
}
