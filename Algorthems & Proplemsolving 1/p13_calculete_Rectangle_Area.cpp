// Programm zur Berechnung der Fläche eines Rechtecks
// Liest Breite und Länge ein und gibt die Fläche aus

#include <iostream>   // Ein- und Ausgabe
#include <cstdlib>    // Allgemeine Hilfsfunktionen
#include <string>     // String-Unterstützung

using namespace std;

// Liest Breite und Länge des Rechtecks vom Benutzer ein
void ReadNumber(float& num1, float& num2)
{
    cout << "Please enter rectangle width A ? \n";
    cin >> num1;

    cout << "Please enter rectangle length B ? \n";
    cin >> num2;
}

// Berechnet die Fläche des Rechtecks
float calculeteRectangleArea(float a, float b)
{
    return a * b;
}

// Gibt die berechnete Fläche aus
void PrintResult(float Area)
{
    cout << "\nRectangle Area = " << Area << endl;
}

int main()
{
    float A, B;  // Breite und Länge des Rechtecks

    ReadNumber(A, B);                          // Eingabe
    PrintResult(calculeteRectangleArea(A, B)); // Berechnung und Ausgabe

    return 0;
}
