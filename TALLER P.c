//Factorial Recursivo
#include <stdio.h>
int Factorial(int n) {
    if (n==0) {
        return 1; 
    }
    return n*Factorial(n-1); 
}
int main() {
    int num;
    printf("Indique un número para obtener su factorial: ");
    scanf("%d", &num);
    
    printf("El factorial de %d es: %d\n", num, Factorial(num));
    
    return 0;
}
