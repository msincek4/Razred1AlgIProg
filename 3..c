#include<stdio.h>
int main()
//3. zadatak
{
    const float PI=3.14159265359;
    float stupnjeva, radijana;
    scanf("%f",&radijana);
    stupnjeva=180/PI*radijana;
    printf("%.2f",stupnjeva);
   return(0); 
}
