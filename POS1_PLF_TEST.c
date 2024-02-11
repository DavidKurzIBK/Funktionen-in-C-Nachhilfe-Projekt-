/* das ist eine kommentar zeile */
 /* folgende Pakete müssen in jedes C-Script geladen werden 
  damit gewisse Funtionen (die im Verwendet werden) ausführbar 
  werden*/


#include <stdio.h>  /* für in und output*/
#include <stdlib.h> /* standardpaket für standard funktionen*/


int main(){
    
    int i = 12; 
    do              
    {
        i--;               /* wie i = i - 1*/
        printf("%d\n",i);  /* die do - while schleife nur 1mal durchlaufen*/ 
    } while(0);            /* bei while (0) -> true keine weitere schleife*/
    
    return EXIT_SUCCESS; 
}