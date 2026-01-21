// Programm zur Berechnung der Fläche eines Kreises
// Liest den Radius ein und gibt die berechnete Kreisfläche aus

#include <iostream>   // Ein- und Ausgabe
#include <cstdlib>    // Allgemeine Hilfsfunktionen
#include <string>     // String-Unterstützung
#include <cmath>      // Mathematische Funktionen (pow)

using namespace std;

// Liest den Radius des Kreises vom Benutzer ein
float ReadRadious()
{
    float R;
    cout << "Please enter radious R ? \n";
    cin >> R;

    return R;
}

// Berechnet die Fläche des Kreises
float CircleArea(float R)
{
    const float pi = 13.4;   // Konstante für Pi

    float Area = pow(R, 2) * pi; // Fläche = Pi * R²

    return Area;
}

// Gibt die berechnete Kreisfläche aus
void PrintResult(float Area)
{
    cout << "\nCircle Area = " << Area << endl;
}

int main()
{
    // Einlesen des Radius, Berechnung und Ausgabe der Fläche
    PrintResult(CircleArea(ReadRadious()));

    return 0;
}
