#include <stdio.h>

int main(){
    int i, maior, numero[] = {0,1,2,3,4,5,6,7,8,9};
    int *p_i, *p_maior, *p_numero;
    p_i = &i;
    p_maior = &maior;
    p_numero = &numero;
    *p_maior = &numero;
    for (*p_i=1;*p_i<10;(*p_i)++)
        if (*(p_numero+*p_i) > *p_maior) *p_maior = *(p_numero+*p_i);
     
    printf("Maior numero do vetor: %d",*p_maior);
    return 0;
}