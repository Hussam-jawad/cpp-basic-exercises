/*
Programmname: Maximum von zwei Zahlen finden
Beschreibung:
Dieses Programm liest zwei Zahlen vom Benutzer ein,
bestimmt die größere Zahl und gibt das Ergebnis
auf der Konsole aus.
Verwendete Konzepte: Funktionen, Bedingungen, Ein- und Ausgabe.
*/

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

// Liest zwei Zahlen vom Benutzer ein
void ReadNumber(int& Num1, int& Num2)
{
    cout << "Please enter Number 1 ? \n";
    cin >> Num1;

    cout << "Please enter Number 2 ? \n";
    cin >> Num2;
}

// Bestimmt die größere von zwei Zahlen
int MaxOf2Number(int Num1, int Num2)
{
    if (Num1 > Num2)
        return Num1;
    else
        return Num2;
}

// Gibt die größere Zahl auf der Konsole aus
void PrintResult(int Num1, int Num2)
{
    if (MaxOf2Number(Num1, Num2) == Num1)
        cout << "The Number1 is The Max Number 1 ;\n";
    else
        cout << "The Number2 is The Max Number ;\n";
}

int main()
{
    int Num1, Num2;

    // Liest die Zahlen ein
    ReadNumber(Num1, Num2);

    // Bestimmt und gibt die größere Zahl aus
    PrintResult(Num1, Num2);

    return 0;
}
