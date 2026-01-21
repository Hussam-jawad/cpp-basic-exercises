// Programm zur Ermittlung der größten von drei Zahlen
// Verwendet Funktionen, Referenzen und einfache Vergleichslogik

#include <iostream>   // Ein- und Ausgabe
#include <cstdlib>    // Allgemeine Hilfsfunktionen
#include <string>     // String-Unterstützung

using namespace std;

// Liest drei Zahlen vom Benutzer ein
void ReadNumber(int& Num1, int& Num2, int& Num3)
{
    cout << "Please enter Number 1 ? \n";
    cin >> Num1;

    cout << "Please enter Number 2 ? \n";
    cin >> Num2;

    cout << "Please enter Number 3 ? \n";
    cin >> Num3;
}

// Gibt die größte von drei Zahlen zurück
int maxof_3_number(int num1, int num2, int num3)
{
    if (num1 > num2 && num1 > num3)
        return num1;

    if (num2 > num1 && num2 > num3)
        return num2;
    else
        return num3;
}

// Gibt aus, welche Zahl die größte ist
void PrintResult(int num1, int num2, int num3)
{
    if (maxof_3_number(num1, num2, num3) == num1)
        cout << "The Number1 is The Max Number " << num1 << endl;
    else if (maxof_3_number(num1, num2, num3) == num2)
        cout << "The Number2 is The Max Number " << num2 << endl;
    else
        cout << "The Number3 is The Max Number " << num3 << endl;
}

int main()
{
    int Num1, Num2, Num3;  // Deklaration der Variablen

    ReadNumber(Num1, Num2, Num3);   // Eingabe
    PrintResult(Num1, Num2, Num3);  // Ausgabe

    return 0;
}
