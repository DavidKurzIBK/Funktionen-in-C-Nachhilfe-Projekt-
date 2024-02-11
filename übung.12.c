
//übung 12: 

#include <stdio.h>

int main() {
    long long zahl, umgedrehteZahl = 0;
    int rest;

    // Eingabe der Zahl
    printf("Geben Sie eine beliebig lange Zahl ein: ");
    scanf("%lld", &zahl);

    // Umkehrung der Zahl
    while (zahl != 0) {
        rest = zahl % 10;
        umgedrehteZahl = umgedrehteZahl * 10 + rest;
        zahl /= 10;
    }

    // Ausgabe der umgekehrten Zahl
    printf("Die umgekehrte Zahl ist: %lld\n", umgedrehteZahl);

    return 0;
}
