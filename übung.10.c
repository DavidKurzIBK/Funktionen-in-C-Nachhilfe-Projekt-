// Übung 10:

#include <stdio.h>
#include <stdlib.h>

int main() {
    char operator;
    float zahl1, zahl2, ergebnis;

    // Eingabe der Operation
    printf("Geben Sie eine mathematische Operation ein (+, -, *, /): ");
    scanf(" %c", &operator);

    // Überprüfen, ob der Operator gültig ist
    while (operator != '+' && operator != '-' && operator != '*' && operator != '/') {
        printf("Ungültiger Operator! Bitte geben Sie eine gültige Operation ein (+, -, *, /): ");
        scanf(" %c", &operator);
    }

    // Eingabe der Zahlen
    printf("Geben Sie zwei Zahlen ein: ");
    while (scanf("%f %f", &zahl1, &zahl2) != 2) {
        // Fehlerbehandlung bei ungültiger Eingabe
        printf("Ungültige Zahlen! Bitte geben Sie zwei gültige Zahlen ein: ");
        fflush(stdin); // Puffer leeren, um fehlerhafte Eingaben zu verwerfen
    }

    // Durchführen der Operation basierend auf dem Operator
    switch(operator) {
        case '+':
            ergebnis = zahl1 + zahl2;
            break;
        case '-':
            ergebnis = zahl1 - zahl2;
            break;
        case '*':
            ergebnis = zahl1 * zahl2;
            break;
        case '/':
            if (zahl2 != 0)
                ergebnis = zahl1 / zahl2;
            else {
                printf("Division durch Null nicht erlaubt!\n");
                exit(EXIT_FAILURE);
            }
            break;
        default:
            printf("Ungültige Operation!\n");
            exit(EXIT_FAILURE);
    }

    // Ausgabe des Ergebnisses
    printf("Das Ergebnis von %.2f %c %.2f ist: %.2f\n", zahl1, operator, zahl2, ergebnis);

    return 0;
}
