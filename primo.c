//Numero primo o no
#include <stdio.h>

int Primo(int numero) {
    if (numero<=1) {
        return 0;
    }

    for (int i=2;i*i<=numero;i++) {
        if (numero % i==0) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int num;
    printf("Introduce un número: ");
    scanf("%d", &num);

    if (Primo(num)) {
        printf("%d es un número primo.\n", num);
    } else {
        printf("%d no es un número primo.\n", num);
    }

    return 0;
}
