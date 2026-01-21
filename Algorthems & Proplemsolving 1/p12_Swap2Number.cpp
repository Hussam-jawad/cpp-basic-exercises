// Programm zum Einlesen von zwei Zahlen, deren Werte vertauscht werden
// Demonstriert die Verwendung von Referenzen und Funktionen in C++

#include <iostream>   // Für Ein- und Ausgabe (cout, cin)
#include <cstdlib>    // Allgemeine Hilfsfunktionen (hier nicht direkt genutzt)
#include <string>     // String-Datentyp (hier nicht direkt genutzt)

using namespace std;  // Ermöglicht die direkte Nutzung von std-Funktionen

// Funktion zum Einlesen von zwei Zahlen über Referenzen
// Parameter:
// num1 → erste Zahl (wird direkt verändert)
// num2 → zweite Zahl (wird direkt verändert)
void ReadNumber(int& num1, int& num2)
{
    cout << "Please enter a Number 1 ? \n";
    cin >> num1;

    cout << "Please enter a Number 2 ? \n";
    cin >> num2;
}

// Funktion zum Vertauschen (Swappen) von zwei Zahlen
// Parameter:
// a → erste Zahl (Referenz)
// b → zweite Zahl (Referenz)
void SwapNumber(int& a, int& b)
{
    int temp = 0;  // Temporäre Variable zur Zwischenspeicherung
    temp = a;      // Speichert den Wert von a
    a = b;         // Überschreibt a mit dem Wert von b
    b = temp;      // Setzt b auf den ursprünglichen Wert von a
}

// Funktion zur Ausgabe der beiden Zahlen
// Parameter:
// num1 → erste Zahl
// num2 → zweite Zahl
void PrintNumbers(int num1, int num2)
{
    cout << "\nNumber1 = " << num1 << endl;
    cout << "Number2 = " << num2 << endl;
}

int main()
{
    int num1, num2;   // Deklaration der zwei Ganzzahlen

    ReadNumber(num1, num2);     // Einlesen der Zahlen
    PrintNumbers(num1, num2);   // Ausgabe vor dem Tauschen
    SwapNumber(num1, num2);     // Vertauschen der Werte
    PrintNumbers(num1, num2);   // Ausgabe nach dem Tauschen

    return 0; // Beendet das Programm erfolgreich
}
