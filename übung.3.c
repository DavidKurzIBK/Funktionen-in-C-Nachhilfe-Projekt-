// Übung 3:

#include <stdio.h>
#include <math.h>

int main()
{   
    // Anfangs Paramter
    long long binaerzahl;  // weil binärzahl bis 36 stellen brauche ich anderes Zahlenformat (long long)
    int dezzahl = 0;
    int expon = 0;
    int rest;  // 
    
    // Primzahl nur durch sich selbst und durch 1 teilbar
    
    // Obergrenze der Primazhlentabelle 
    printf("Gib eine Binaerzahl ein: ");
    scanf("%lld", &binaerzahl); 
 
    // while Schleife um Binärzahl Dezimalzahl umzuwandeln
    
    while (binaerzahl != 0){
        rest = binaerzahl % 10; 
        dezzahl += rest * pow(2, expon); 
        expon++;
        binaerzahl /= 10;
    }
    
    printf("Dezimalzahl ist: %d\n", dezzahl);
    

    return 0;  //EXIT_SUCCESS; 
}