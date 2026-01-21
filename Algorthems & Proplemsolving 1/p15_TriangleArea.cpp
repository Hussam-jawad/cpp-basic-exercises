// Programm zur Berechnung der Dreiecksfläche
// Liest Basis A und Höhe H ein und gibt die Fläche aus

#include <iostream>   
#include <cstdlib>  
#include <string>   
#include <cmath>    

using namespace std;

// Liest Basis und Höhe des Dreiecks vom Benutzer ein
void ReadNumber(float& num1, float& num2)
{
    cout << "Please enter triangle base A ? \n";
    cin >> num1;

    cout << "Please enter triangle height H ? \n";
    cin >> num2;
}

// Berechnet die Fläche des Dreiecks
float TriangleArea(float a, float h)
{
    // Fläche = 0.5 * Basis * Höhe
    return (a / 2) * h;
}

// Gibt die berechnete Fläche aus
void PrintResult(float Area)
{
    cout << "\nTriangle Area = " << Area << endl;
}

int main()
{
    float A, H;  // Basis und Höhe

    ReadNumber(A, H);                 // Eingabe
    PrintResult(TriangleArea(A, H));  // Berechnung und Ausgabe

    return 0;
}
