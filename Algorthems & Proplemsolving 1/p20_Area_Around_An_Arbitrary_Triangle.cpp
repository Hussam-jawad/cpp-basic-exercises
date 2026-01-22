// Programm zur Berechnung der Kreisfläche anhand eines Dreiecks
// Liest drei Dreiecksseiten ein und berechnet die zugehörige Kreisfläche

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

// Liest die drei Seiten des Dreiecks vom Benutzer ein
void ReadTriangleData(float& A, float& B, float& C)
{
    cout << "Please enter triangle side A ? " << endl;
    cin >> A;

    cout << "Please enter triangle base B ? " << endl;
    cin >> B;

    cout << "Please enter triangle side C ? " << endl;
    cin >> C;
}

// Berechnet die Kreisfläche basierend auf den Dreiecksseiten
float CircleAreaByATriangle(float A, float B, float C)
{
    const float PI = 3.14;

    float p;
    p = (A + B + C) / 2;   // Halber Umfang des Dreiecks

    float T;
    // Berechnung des Umkreisradius über die Dreiecksseiten
    T = (A * B * C) / (4 * sqrt(p * (p - A) * (p - B) * (p - C)));

    float Area = PI * pow(T, 2); // Kreisfläche

    return Area;
}

// Gibt die berechnete Kreisfläche aus
void PrintReasult(float Area)
{
    cout << "\nCircl Area = " << Area << endl;
}

int main()
{
    float A, B, C;  // Dreiecksseiten

    ReadTriangleData(A, B, C);                 // Eingabe
    PrintReasult(CircleAreaByATriangle(A, B, C)); // Berechnung und Ausgabe

    return 0;
}
