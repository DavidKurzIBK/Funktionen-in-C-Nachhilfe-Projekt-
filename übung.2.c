// Übung 2:

#include <stdio.h>


int main()
{   
    // Eingabe Paramter
    int obergrenze; 
    int zahl = 2;  // 2 ist erste Primzahl
    
    // Primzahl nur durch sich selbst und durch 1 teilbar
    
    // Obergrenze der Primazhlentabelle 
    printf("Gib Obergrenze der Primzahlentabelle an: ");
    scanf("%d", &obergrenze); 
 
    // do-while Schleife um Primzahlen von 2 bis gewisser Zahl zu finden
    
    do {
        int primzahl = 1; // Annahme: weil mit Primzahl 2 starten ist do bedingung 
                            // ist do bedingung am anfang TRUE = 1 , FALSE = 0
        
        // überprüfen ob eine Primzahl ist oder nicht
        for (int i = 2;    // generiert liste von zahlen die alle durch 2 geteilt werden
            i <= zahl / 2; 
            i++){
                if (zahl % i == 0){         // wenn eine Zahl durch 2 dividiert (in liste oben) keinen Rest 
                                            // (" % == 0") dann ist sie keine Primzal
                    primzahl = 0;           // wenn aktuelle zahl in schleife keine Primzahl ist wird if 
                                            // if bedingung abgebrochen und wieder mit for schleife fortgesetzt
                    break;
                }
            } if (primzahl){           // if bedigung mit print nur ausgeführt wenn primzahl von oben TRUE = 1
                printf("%d\n", zahl);
            }
            
            zahl++;
    }
    while(zahl <= obergrenze);
    
    // diese Schleife wird für die 

    return 0;  //EXIT_SUCCESS; 
}