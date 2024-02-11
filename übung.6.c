/*
Übung:6 
Fläche und Umfang von geometrischen Formen

*/

#include <stdlib.h>
#include <stdio.h>
// für mathematische Konstanten brauh ich paket 
#include <math.h>

int main(){
    
    // variablen für Formen und Berechnungen (auch kommazahle zulassen)
    char form;
    double umfang, flaeche; 
    double a, b, c, radius;
    
    
    
    // wie bei Übung 4 einer do-while bedingung für Formen eingabeaufforderung
    // Benutzer nach 3 geometrischen Formen fragen (T, C oder R)
    do {
        printf("Geben sie (C für Kreis, R für Rechteck oder T für Dreieck ein!");
        scanf("%c", &form);
        
        // Überprüfe ob Eingabe valide?
        if (form != 'C' && form != 'R' && form != 'T') {
            printf("Ungültige Eingabe, bitte C, R oder T!\n");
        }
        
    } while (form != 'C' && form != 'R' && form != 'T');
    
    // Berechnungen aufgrund von eingabe parametern starten: 
    // switch fkt mit cases!!
    
    switch(form){
        
        
        // Kreis Berechnungen ausführen;
        case 'C':
            printf("Gib den Radius ein!:");
            scanf("%lf", &radius);
            flaeche = M_PI * radius * radius;
            umfang = 2 * M_PI * radius;
            break;  // um nach einer der 3 berechnungen aus switch zu kommen immer ein break
        
        // Berechnungen für Dreieck ausführen
        case 'T':
            printf("Geben sie die Längen a, b und c ein (Leerzeichen getrennt)!");
            scanf("%lf %lf %lf", &a, &b, &c);
            // Überprüfe ob seitenlänge ein geschlossenes Dreieck ergeben??
            // 2 seiten addiert immer größer als die verbleibende sein!!
            if (a + b > c && a + c > b && b + c > a) {
            // für alle arten von Dreiecken gilt: 
            double s = (a + b + c) / 2 ; 
            flaeche = sqrt(s * (s - a) * (s - b) * (s - c));
            umfang = a + b + c;
            } else {
                printf("Gib gültige Seitenlängen ein!! \n");
                return 1; // Programm beenden!! 
            } 
            break;
        
        
        // Berechnung für Rechteck ausführen
        case 'R':
            printf("Geben sie die Länge und Breite des Rechecks an (Leerzeichen getrennt)!");
            scanf("%lf %lf", &a, &b); 
            flaeche = a * b;
            umfang = 2* (a + b); 
            break;
    }
    
    
 
    // Ausgabe von Fläche und Umfang 
    printf("flaeche: %.4lf\n", flaeche);
    printf("umfang: %.4lf\n", umfang);

    return 0; 
    
}