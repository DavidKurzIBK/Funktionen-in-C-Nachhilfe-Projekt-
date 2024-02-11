/*
Übung:5 
While-schleife um N (Anzahl) an natürlichen Zahlen zu berechnen

*/

#include <stdlib.h>
#include <stdio.h>

int main(){
    
    // variablen deklaration
    int n; 
    int summe = 0; 
    int i = 1; // erste natürliche Zahl wäre hier 1 !! 
    /* kurzschreibweise: 
    int n, summe = 0, i = 1;
    */
    
    
    // eingabeaufforderung der Anzahl N natürlichen Zahlen
    printf("Gib die Anzahl N ein:! ");
    scanf("%d", &n);
    
    // Berechnen der Summe bis zu N natürlichen Zahlen 
    while(i <= n){
        summe += i;
        i++;
    }  
    
    // Ausgabe der Summe 
    printf("Summe der natürlichen Zahlen bis zur Zahl %d ist: %d\n", n, summe); 

    return 0; 
    
}