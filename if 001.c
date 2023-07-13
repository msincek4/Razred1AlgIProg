#include <stdio.h>

int main()
{
    int M1,M2,M3,S1,S2,S3,PS,PM,Ps, sve_etape;
scanf("%d %d", &M1, &S1);
scanf("%d %d", &M2, &S2);
scanf("%d %d", &M3, &S3);
scanf("%d %d %d", &PS, &PM, &Ps);
sve_etape= M1*3600 + S1*60 + M2*3600 + S2*60 +M3*3600 + S3*60; //u sekundama 
printf("%d:%d:%d",PS+(sve_etape/3600+sve_etape%3600)+PM+Ps);
return 0;
}
