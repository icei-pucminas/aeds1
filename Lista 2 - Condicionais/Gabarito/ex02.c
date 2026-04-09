#include <stdio.h>

int main()
{
    int numero;

    // Leitura do número
    printf(" Digite um número inteiro : ");
    scanf("%d", &numero);

    // Verificação de divisibilidade por 7
    if (numero % 7 == 0)
    {
        printf("O número %d é divisível por 7.\ n", numero);
    }
    else
    {
        printf("O número %d não é divisível por 7.\ n", numero);
    }

    return 0;
}