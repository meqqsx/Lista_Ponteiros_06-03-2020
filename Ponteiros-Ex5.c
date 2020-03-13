#include <stdio.h>

float media(int *p_vetor) {
    int i, *p_i;
    float soma, *p_soma;
    p_soma = &soma;
    p_i = &i;
    for (*p_i=0;*p_i<30;(*p_i)++) 
        *p_soma += *(p_vetor+*p_i);
    return (*p_soma)/30;
}

int main() {
	int vetor[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
    int *p_vetor, *p_i;
    p_vetor = &vetor;
    printf("Media: %.2f",media(p_vetor));
    return 0;
}