#include <stdio.h>

void maiorEntre(int *p1, int *p2) {
    printf("%d", (*p1 > *p2) ? *p1 : *p2);
}

int main() {
    int n1=42,n2=11;
    int *p1,*p2;
    p1 = &n1; p2 = &n2;
    maiorEntre(p1,p2);
    return 0;
}