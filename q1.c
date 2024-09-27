#include<stdio.h>

int pertence_fibonacci(int n);

int main(void){
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    
    if (pertence_fibonacci(n))
        printf("%d pertence à sequência de Fibonacci.\n", n);
    else
        printf("%d não pertence à sequência de Fibonacci.\n", n);
    
    return 0;
}

int pertence_fibonacci(int n)
{
    int a = 0, b = 1, temp;

    if (n == 0 || n == 1)
        return 1;
    
    while (b <= n) {
        if (b == n)
            return 1; 
        temp = b;
        b = a + b;
        a = temp;
    }
    
    return 0; 
}
