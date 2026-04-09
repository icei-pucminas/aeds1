#include <stdio.h>

 int main () {

    int hora , minuto , totalMinutos ;

    printf (" Digite a hora (0 -23) : ") ;
    scanf ("%d", & hora ) ;

    printf (" Digite os minutos (0 -59) : ");
    scanf ("%d", & minuto ) ;

    totalMinutos = hora * 60 + minuto ;

    printf ("Ja se passaram %d minutos desde o inicio do dia .\n", totalMinutos ) ;

    return 0;
 }
