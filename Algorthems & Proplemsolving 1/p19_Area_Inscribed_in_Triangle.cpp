// Programm zur Berechnung der Kreisfläche innerhalb eines Dreiecks
// Liest Dreiecksseite A und Basis B ein und gibt die berechnete Fläche aus

#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>    // Für pow()

using namespace std;

// Liest die Seite A und die Basis B des Dreiecks vom Benutzer ein
void ReadTriangleData(float& A, float& B)
{
    cout << "Please enter triangle side A ? " << endl;
    cin >> A;

    cout << "Please enter triangle base B ? " << endl;
    cin >> B;
}

// Berechnet die Kreisfläche innerhalb des Dreiecks
float CircleAreaByITriangle(float A, float B)
{
    const float PI = 3.14;

    float Area = PI * (pow(B, 2) / 4) * ((2 * A - B) / (2 * A + B));
    return Area;
}

// Gibt die berechnete Fläche aus
void PrintResult(float Area)
{
    cout << "\nCircle Area = " << Area << endl;
}

int main()
{
    float A, B;  // Dreiecksseite und Basis

    ReadTriangleData(A, B);                  // Eingabe
    PrintResult(CircleAreaByITriangle(A, B)); // Berechnung und Ausgabe

    return 0;
}
