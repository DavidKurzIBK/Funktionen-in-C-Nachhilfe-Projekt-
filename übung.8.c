/* 
Übung: 8:
Große Lösungsformel für quadratische Gleichungen mit Test ob Lösung exisiert.

Bsp: 2x^2 + 3x + 5 = 0
x_1,2 = (-b +/- sqrt(b^2 - 4*a*c)) / 2a

*/

#include <stdio.h>
#include <math.h>


int main()
{
    
    double a, b, c, D, x1, x2;  
    
    // Eingabeaufforderung von Koeffizienten der quadratischen Gleichung
    printf("Geben Sie die Koeffizienten a, b, und c ein (mit Leerzeichen getrennt!): ");
    scanf("%lf %lf %lf", &a, &b, &c);
    
    // Diskriminante berechnen!!:
    D = b * b - 4 * a * c; 
    
    // Überprüfe ob die Diskriminante größer oder gleich Null ist, dann reele Lösungen berechene
    // Ansonsten Warnung ausgeben und Programm beenden
        if (D >= 0){
        // berechnen der Lösungen:
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);
        
        printf("Die reelen Lösungen der quadratischen Gleichung sind: %.2lf und %.2lf\n", x1, x2);
        
    } else {
        // keine reele Lösung möglich
        printf("Die quadratische Gleichung hat keine reele Lösung");
    }

return 0;
}