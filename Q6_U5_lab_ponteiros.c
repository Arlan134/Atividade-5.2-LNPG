#include <stdio.h>

int main(void) {
    int v[10];

    for (int i = 0; i < 10; i++) {
        v[i] = i * 10;
    }

    v[10] = 999;   /* ERRO DE PROPOSITO: indices validos sao 0..9 */

    printf("v[9] = %d\n", v[9]);

    return 0;
}

