#include <stdio.h>

int main(void) {
    int v[4];
    double d[4];

    printf("int v[4]:\n");
    for (int i = 0; i < 4; i++) {
        printf("  &v[%d] = %p\n", i, (void *)&v[i]);
    }

    printf("\ndouble d[4]:\n");
    for (int i = 0; i < 4; i++) {
        printf("  &d[%d] = %p\n", i, (void *)&d[i]);
    }

    return 0;
}

