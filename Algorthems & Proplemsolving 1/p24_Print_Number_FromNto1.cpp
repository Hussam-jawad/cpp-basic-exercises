// Programm zur Ausgabe von Zahlen von N bis 1
// Demonstriert die Verwendung von for-, while- und do-while-Schleifen

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

// Liest eine positive Zahl vom Benutzer ein
int ReadNumber()
{
    int Num;
    do
    {
        cout << "Please enter a Number ?\n";
        cin >> Num;
    } while (Num <= 0);

    return Num;
}

// Gibt Zahlen von N bis 1 mit einer for-Schleife aus
void PrintNumberFromNto1_UsingFor(int Number)
{
    cout << "Ranged Printed using For Statment:\n";

    for (int i = Number; i >= 1; i--)
    {
        cout << i << endl;
    }
}

// Gibt Zahlen von N bis 1 mit einer while-Schleife aus
void PrintNumberFromNto1_UsingWhile(int Number)
{
    int Counter = Number + 1;

    cout << "Range Printed using While Statement:\n";
    while (Counter > 1)
    {
        Counter--;
        cout << Counter << endl;
    }
}

// Gibt Zahlen von N bis 1 mit einer do-while-Schleife aus
void PrintNumberFromNto1_UsingDoWhile(int Number)
{
    int Counter = Number + 1;

    cout << "Range Printed using Do..While Statment:\n";

    do
    {
        Counter--;
        cout << Counter << endl;
    } while (Counter > 1);
}

int main()
{
    int Number = ReadNumber(); // Eingabe der Zahl

    PrintNumberFromNto1_UsingFor(Number);
    PrintNumberFromNto1_UsingWhile(Number);
    PrintNumberFromNto1_UsingDoWhile(Number);

    return 0;
}
