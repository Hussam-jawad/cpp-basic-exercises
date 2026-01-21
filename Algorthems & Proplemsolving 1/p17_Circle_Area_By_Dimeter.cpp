// Programm zur Berechnung der Kreisfläche anhand des Durchmessers
// Liest den Durchmesser ein und gibt die berechnete Fläche aus

#include <iostream>   // Ein- und Ausgabe
#include <cstdlib>    // Allgemeine Hilfsfunktionen
#include <string>     // String-Unterstützung
#include <cmath>      // Mathematische Funktionen (pow)

using namespace std;

// Liest den Durchmesser des Kreises vom Benutzer ein
float ReadDiameter()
{
    float d;

    cout << "Please enter Radious D? \n";
    cin >> d;

    return d;
}

// Berechnet die Kreisfläche anhand des Durchmessers
float CircleAreaByDiameter(float D)
{
    const float PI = 3.14;  // Konstante für Pi

    float Area = (pow(D, 2) * PI) / 4; // Fläche = (PI * D²) / 4

    return Area;
}

// Gibt die berechnete Kreisfläche aus
void PrintResult(float Area)
{
    cout << "\n Circle Area = " << Area << endl;
}

int main()
{
    // Einlesen des Durchmessers, Berechnung und Ausgabe der Fläche
    PrintResult(CircleAreaByDiameter(ReadDiameter()));

    return 0;
}
