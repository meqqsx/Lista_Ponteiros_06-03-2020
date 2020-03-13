#include <stdio.h>
#include <math.h>

int checarPrimalidade(int *p_n) {
    int i,*p_i;
    p_i = &i;
    for (*p_i=(*p_n)-1;*p_i>=sqrt(*p_n);(*p_i)--)
        if ((*p_n)%(*p_i) == 0) return 0;
    return 1;
}

int main() {
    int n = 4, *p_n;
    p_n = &n;
	printf(checarPrimalidade(p_n) == 0 ? "%d -> Nao primo" : "%d -> Primo",*p_n);
    return 0;
}