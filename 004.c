#include<stdio.h>
int main()
{
    int N, M, voznje, a, b;
    scanf("%d %d", &N, &M);
    a=N/2;
    b=N/2 + N%2;
    voznje=ceil((float)a/M) + ceil((float)b/M);    
    printf("%d", voznje);
    return (0);
}














