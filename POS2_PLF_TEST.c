
#include <stdio.h>  /* für in und output*/
#include <stdlib.h> /* standardpaket für standard funktionen*/
#include <math.h> 

int main(){
    double a = 2;
    double b = 2;
    printf("%f\n", pow(b,2));  /* mit vordef. formel aus math.h paket*/
    printf("%f\n",a*a);

    return 0;
}

// quadriert a .. wird also output 4.0 geben, da es ein double ist