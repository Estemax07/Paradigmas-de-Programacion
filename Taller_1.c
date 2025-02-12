//Factorial Iterativo
#include <stdio.h>


int Factorial(int n) {
    int resultado=1; 
    
    for (int i=1;i<=n;i++) {
        resultado*=i; 
    }

    return resultado;
}

int main() {
    int num;
    printf("Introduce un número para obtener su factorial: ");
    scanf("%d", &num); //%d por que es un entero el que se leera, y scanf es para leerlos
    
    printf("El factorial de %d es : %d\n", num, Factorial(num));
    
    return 0;
}

