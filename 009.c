#include<stdio.h>
int main() {
    int a, b;
    char c;
    scanf("%c%d%d", &c, &a, &b);
    switch(c){
    case '+' :printf("%d", a+b);break;
    case '-' :printf("%d", a-b);break;
    case '*' :printf("%d", a*b);break;
    case '/' :printf("%.2f", (float)a/b);break;
    }
    return 0;
}
