// Programm zur Berechnung der Rechtecksfläche anhand einer Seite und der Diagonale
// Liest Seite A und Diagonale D ein und gibt die Fläche aus

#include <iostream>   // Ein- und Ausgabe
#include <cstdlib>    // Allgemeine Hilfsfunktionen
#include <string>     // String-Unterstützung
#include <cmath>      // Für sqrt() und pow()

using namespace std;

// Liest Seite und Diagonale des Rechtecks vom Benutzer ein
void ReadNumber(float& num1, float& num2)
{
    cout << "Please enter rectangle side A ? \n";
    cin >> num1;

    cout << "Please enter rectangle diagonal d ? \n";
    cin >> num2;
}

// Berechnet die Rechtecksfläche anhand einer Seite und der Diagonale
float RectangleAreaBySideAndDiagonal(float a, float d)
{
    // Fläche = a * sqrt(d^2 - a^2)
    return a * sqrt(pow(d, 2) - pow(a, 2));
}

// Gibt die berechnete Fläche aus
void PrintResult(float Area)
{
    cout << "\nRectangle Area = " << Area << endl;
}

int main()
{
    float A, D;  // Seite und Diagonale

    ReadNumber(A, D);                              // Eingabe
    PrintResult(RectangleAreaBySideAndDiagonal(A, D)); // Berechnung und Ausgabe

    return 0;
}
