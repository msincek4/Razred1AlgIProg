#include<stdio.h>
int main()

{
    const float E=7.53450;
    float kune, euri;
    printf("Unesi iznos u kunama ");
    scanf("%f",&kune);
    euri=kune/E;
    printf("Iznos u eurima:%.2f",euri);
   return(0); 
}
