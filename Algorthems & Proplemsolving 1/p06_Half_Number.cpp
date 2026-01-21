/*
Programmname: Hälfte einer Zahl berechnen
Beschreibung:
Dieses Programm liest eine Ganzzahl vom Benutzer ein,
berechnet die Hälfte dieser Zahl und gibt das Ergebnis
auf der Konsole aus.
Verwendete Konzepte: Funktionen, Ein- und Ausgabe, Typumwandlung.
*/

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

// Liest eine Zahl vom Benutzer ein
int ReadNumber()
{
    int Number = 0;
    cout << "Please enter a Number ?\n";
    cin >> Number;

    return Number;
}

// Berechnet die Hälfte der übergebenen Zahl
float CalcuateHalfNumber(int Number)
{
    return (float)Number / 2;
}

// Gibt das Ergebnis auf der Konsole aus
void PrintReasult(float Number)
{
    cout << "\nThe Half Number is: " << Number << endl;
}

int main()
{
    // Liest die Zahl ein, berechnet die Hälfte und gibt das Ergebnis aus
    PrintReasult(CalcuateHalfNumber(ReadNumber()));

    return 0;
}
