#include <stdio.h>

int fatorial(int *p_n) {
    int i, fatorial = 1;
    int *p_i, *p_fatorial;
    *p_i = &i;
    p_fatorial = &fatorial;
    if ((*p_n)<0) return -1;
    else   
        for (*p_i=*p_n;*p_i>1;(*p_i)--)
            (*p_fatorial) *= (*p_i);
    return *p_fatorial;
}

int main() {
    int n = 5,*p_n;
    p_n = &n;
	printf("%d",fatorial(p_n));
    return 0;
}