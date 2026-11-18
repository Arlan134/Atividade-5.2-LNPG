#include <stdio.h>

int main(void) {
    char s[50];
    int n = 0;

    printf("Palavra: ");
    scanf("%49s", s);

    while (s[n] != '\0') {
        n++;
    }

    printf("Tamanho: %d\n", n);

    printf("Invertida: ");
    for (int i = n - 1; i >= 0; i--) {
        printf("%c", s[i]);
    }
    printf("\n");

    return 0;
}

