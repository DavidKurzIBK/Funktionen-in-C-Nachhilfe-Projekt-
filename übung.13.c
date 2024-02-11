// übung13:

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Funktion zur Generierung eines zufälligen lesbaren Zeichens
char randomReadableChar() {
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    const int charsetSize = sizeof(charset) - 1;
    return charset[rand() % charsetSize];
}

int main() {
    int eingabe;

    // Seed für die Zufallszahlengenerierung initialisieren
    srand(time(NULL));

    // Eingabe der Zahl durch den Benutzer
    printf("Geben Sie eine Zahl ein: ");
    scanf("%d", &eingabe);

    // Generierung und Ausgabe der zufälligen lesbaren Zeichen
    for (int i = 0; i < eingabe; ++i) {
        printf("%c", randomReadableChar());
        if ((i + 1) % 7 == 0 || i == eingabe - 1) // Zeilenumbruch nach jedem 7. Zeichen oder am Ende
            printf("\n");
        else
            printf(", "); // Komma nach jedem Zeichen außer dem letzten in der Zeile
    }

    return 0;
}
