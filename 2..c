#include<stdio.h>
int main()
//2. zadatak
{
    const float PI=3.14159265359;
    float stupnjeva, radijana;
    scanf("%f",&stupnjeva);
    radijana=PI/180*stupnjeva;
    printf("%f",radijana);
   return(0); 
}
