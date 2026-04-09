# include <stdio.h>

 int main () {
    
    float salarioMinimo , salarioPessoa , qtdSalarios ;

    printf (" Digite o valor do salario minimo : ") ;
    scanf ("%f", & salarioMinimo ) ;

    printf (" Digite o valor do salario da pessoa : ") ;
    scanf ("%f", & salarioPessoa ) ;

    qtdSalarios = salarioPessoa / salarioMinimo ;

    printf ("A pessoa ganha %.2 f salarios minimos .\n", qtdSalarios ) ;

    return 0;
 }