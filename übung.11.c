
// Übung 11:

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int choice;
    float zahl, ergebnis;

    do {
        // Menü anzeigen
        printf("\nAuswahlmenü:\n");
        printf("1. Sinus berechnen\n");
        printf("2. Cosinus berechnen\n");
        printf("3. Tangens berechnen\n");
        printf("4. Wurzel berechnen\n");
        printf("5. Dritte Wurzel berechnen\n");
        printf("6. Beenden\n");
        printf("Bitte wählen Sie eine Option: ");
        scanf("%d", &choice);

        // Auswahl verarbeiten
        switch(choice) {
            case 1:
                printf("Geben Sie eine Zahl ein: ");
                scanf("%f", &zahl);
                ergebnis = sin(zahl);
                printf("Sinus von %.2f ist: %.2f\n", zahl, ergebnis);
                break;
            case 2:
                printf("Geben Sie eine Zahl ein: ");
                scanf("%f", &zahl);
                ergebnis = cos(zahl);
                printf("Cosinus von %.2f ist: %.2f\n", zahl, ergebnis);
                break;
            case 3:
                printf("Geben Sie eine Zahl ein: ");
                scanf("%f", &zahl);
                ergebnis = tan(zahl);
                printf("Tangens von %.2f ist: %.2f\n", zahl, ergebnis);
                break;
            case 4:
                printf("Geben Sie eine Zahl ein: ");
                scanf("%f", &zahl);
                if (zahl >= 0)
                    ergebnis = sqrt(zahl);
                else {
                    printf("Negative Zahlen sind für die Wurzel nicht erlaubt!\n");
                    break;
                }
                printf("Wurzel von %.2f ist: %.2f\n", zahl, ergebnis);
                break;
            case 5:
                printf("Geben Sie eine Zahl ein: ");
                scanf("%f", &zahl);
                ergebnis = cbrt(zahl);
                printf("Dritte Wurzel von %.2f ist: %.2f\n", zahl, ergebnis);
                break;
            case 6:
                printf("Programm wird beendet.\n");
                break;
            default:
                printf("Ungültige Option! Bitte wählen Sie eine der verfügbaren Optionen.\n");
        }
    } while(choice != 6);

    return 0;
}
