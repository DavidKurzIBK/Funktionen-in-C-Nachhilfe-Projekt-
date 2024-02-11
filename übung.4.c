/*
Übung 4: 
Zufallszahlengenerator

*/

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
 

int main(){
    
    // variablen deklaration
    char eingabe;  // in eingabe wird G oder K des Benutzer gespeichert;
    int untergrenze; 
    int obergrenze; 
    int anzahl;
    
    /* kurzschreibweise: 
    int untergrenze, obergrenze, anzahl;
    */
    
    // Zufallszahlengenerator
    srand(time(NULL));   // shortcut um randomisierte zahlen zu generieren
    
    
    // eingabeaufforderung ob Gleitkomma ('K') oder Ganzzahl ('G')
    do{
        printf("Generiere Ganzzahl (G) oder Gleitkommazahl (K)! ");
        scanf(" %c", &eingabe);
    } while(eingabe != 'K' && eingabe != 'G');   // while bedingung solange ausgeführt bis G oder K eingegeben!!
    
    
    // Benutzereingabe von unter,- obergrenze und anzahl der zufallszahlen: 
    printf("Gib eine Ganzzahl als Unter,- Obergrenze und Anzahl der Zufallszahlen an (mit Leerzeichen getrennt):"); 
    scanf("%d %d %d", &untergrenze, &obergrenze, &anzahl);
    
    // Zufallszahlen generieren und ausgeben entsprechen nach G oder K eingabe if-else bedingung; 
    // zufallszahlen mit for-schleife generieren
    
    if (eingabe == 'G') {
        for (int i = 0; i < anzahl; i++) { // füge mit for schleife zufallzahlen zwischen unter und obergrenze ein
            int zufallszahl = (int)rand() % (obergrenze - untergrenze + 1) + untergrenze; 
            // zufallszahl liegt innerh. interval [untergr; obergr]
            // (obgrenze - untergrenze + 1) +  
            // bsp: % (12 - 1 + 1) + 1 = 13 = obergrenze + untergrenze; 
            // in (untergrenze; obergrenze)
            printf("%d ", zufallszahl);
        }
    } else {
        for (int i = 0; i < anzahl; i++){
            double zufallszahl = (double)rand() / RAND_MAX * (obergrenze - untergrenze) + untergrenze;
            printf("%.4f ", zufallszahl);
        }
        
    }
    
    return 0;
}