#include<stdio.h>
int main()
//4. zadatak
{
    int sekunda,sat,minuta,dan;
    scanf("%d",&sekunda);
    dan=sekunda/(24*60*60);
    sekunda=sekunda%(24*60*60);
    sat=sekunda/(60*60);
    sekunda=sekunda%(60*60);
    minuta=sekunda/60;
    sekunda=sekunda%60;
    printf("dana: %d\nsati: %d\nminuta: %d\nsekundi: %d\n",dan, sat, minuta, sekunda);
   return(0); 
}
