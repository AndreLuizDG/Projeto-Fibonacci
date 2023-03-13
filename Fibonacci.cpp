#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, a = 0, b = 1, c = 1, pertence = 0;
    printf("Informe um numero inteiro positivo: ");
    scanf("%d", &n);
    for (; c <= n; ) {
        if (c == n) {
            pertence = 1;
}
        a = b;
        b = c;
        c = a + b;
    }
    
    if (pertence) {
        printf("%d pertence a sequencia de Fibonacci.\n", n);
    } else {
        printf("%d nao pertence a sequencia de Fibonacci.\n", n);
    }
    
}
