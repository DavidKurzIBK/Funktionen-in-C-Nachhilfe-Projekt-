// Übung 1: 

#include <stdio.h>


int main()
{   
    // Eingabe Paramter
    int zahl;  // größte Zahl der Multipilikationstabelle
    int i = 0; 
    
    // Eingabe der Zahl für die Multipilikationstabelle 
    printf("Gib eine positive ganze Zahl der Multipilikationstabelle an: ");
    scanf("%d", &zahl); 
 
    // while Schleife bricht bei zahl ab
    while(i <= zahl) {
        printf("%d * %d = %d\n", i, zahl, zahl * i); // Rechenoperation in Printf ausgeführt
        i++;
    }
    // Die schleife wird "zahl" + 1 mal aufgeführt!! 

    return 0;  //EXIT_SUCCESS;
}