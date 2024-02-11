/*
Übung:7 
Eingabe von Zahlen bis # kommt, dann alle grösste und kleinste zahl filtern
*/

#include <stdlib.h>
#include <stdio.h>


int main(){
    
    // variablen für Formen und Berechnungen (auch kommazahle zulassen)
    // char eingabe;
    double zahl, groesste, kleinste; 
    int erste_zahl = 1; //Verwenden zum Überprüfen der ersten eingabe zahl!! 
    // erste zahl ist immer TRUE = 1 

    
    printf("Gib Zahlen ein (beende mit '#')!\n");
    
    
    // Zahlen einlesen: 
    while (scanf("%lf", &zahl) == 1 && zahl != '#') { // solang zahlen eingegeben werden entscheide über if
        if (erste_zahl){ // mit dieser bedingung finde ich größte Zahl
            groesste = zahl;
            kleinste = zahl;
            erste_zahl = 0; // Setze Zahl Null, FALSE um zu signalisieren dass erste Zahl bereeits eingelesen und
            // die kleinste double somit auf aktuell kleinste zahl gesetzt
        } else {
            if (zahl < kleinste){
                kleinste = zahl;
            }   
            if (zahl > groesste) {
                groesste = zahl;
            }
        
        }
    }
    
    // Ausgabe der größten und kleinsten Zahl; 
    printf("Groesste Zahl: %.4lf\n", groesste);
    printf("Kleinste Zahl: %.4lf\n", kleinste);
    
    
    // wenn # eingegeben dann abbruch!! 
    if (zahl == '#') {
        return 0;
    }


    return 0;
}