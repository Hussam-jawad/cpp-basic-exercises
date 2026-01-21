// Programm zur Berechnung der Kreisfläche anhand des Umfangs
// Liest den Umfang ein und gibt die berechnete Fläche aus

#include <iostream>   // Ein- und Ausgabe
#include <cstdlib>    // Allgemeine Hilfsfunktionen
#include <cmath>      // Mathematische Funktionen (pow)

using namespace std;

// Liest den Umfang des Kreises vom Benutzer ein
float ReadCirumferece()
{
    float L;
    cout << "Please enter Circumference? \n";
    cin >> L;

    return L;
}

// Berechnet die Kreisfläche anhand des Umfangs
float CircleAreaByCircumference(float L)
{
    const float PI = 3.14;   // Konstante für Pi

    float Area = pow(L, 2) / (4 * PI); // Fläche = L² / (4 * PI)

    return Area;
}

// Gibt die berechnete Kreisfläche aus
void PrintResult(float Area)
{
    cout << "\ncircle Area = " << Area << endl;
}

int main()
{
    // Einlesen des Umfangs, Berechnung und Ausgabe der Fläche
    PrintResult(CircleAreaByCircumference(ReadCirumferece()));

    return 0;
}
