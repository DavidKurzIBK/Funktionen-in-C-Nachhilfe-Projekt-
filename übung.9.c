/* 
Übung: 9:
Summieren aller ungeraden und Harshad-Zahlen bis zur Obergrenze N (natürliche zahlen);.

Bsp Harshad-Zahlen: Quersumme 7 + 7 + 7 = 21 (Zahl ist durch summand der Quersumme teilbar)

*/


#include <stdio.h>
#include <math.h>


// funktion zur Überprüfung ob zahl eine Harshad-Zahl?? 
// wenn ja soll es ein True zurückgeben !! 
// alle zahlen bis zur Obergrenze werden somit überprüft ob sie eine harshhad sind

int harshhad(int zahl){
    
    int quersumme = 0; 
    int temporaer = zahl; 
    
    // bilde die Quersumme aller möglichen zahle (die später i sind)
    while (temporaer > 0){
        quersumme += temporaer % 10; 
        temporaer /= 10; 
    }
    
    // Überprüfung ob Zahl durch dessen Quersumme teilbar ist??
    return (zahl % quersumme == 0); 
}


int main()
{
    
    int Obergrenze, summeUngerade = 0, summeHarshhad = 0;  
    
    // Eingabeaufforderung der Obergrenze
    printf("Geben Sie eine Obergrenze N (natürliche Zahl ein): ");
    scanf("%d", &Obergrenze);
    
    // Summieren der ungeraden Zahlen:
        for (int i = 1; i <= Obergrenze; i += 2){
            summeUngerade += i;
        
            
            // nur wenn i eine harshhad Zahl dann komme ich in if bedingung:
            if (harshhad(i)){
                summeHarshhad += i;
            }
            
        }
        
        
        
    printf("Die Summer der Ungeraden Zahlen ist: %d\n", summeUngerade);
    printf("Die Summer der Harshad-Zahlen ist: %d", summeHarshhad);


return 0;
}