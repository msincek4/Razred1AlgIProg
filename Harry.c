 #include<stdio.h>
int main()
{
    int gal, srp, knt, sve_knt;
    scanf("%d %d %d", &gal, &srp, &knt);
    sve_knt=knt;
    knt=gal*17*29;
    sve_knt+=knt;
    knt=srp*29;
    sve_knt+=knt;
    printf("%d\n" , sve_knt);
    return(0);
}
