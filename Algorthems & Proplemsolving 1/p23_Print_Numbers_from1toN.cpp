// Programm zur Ausgabe eines Zahlenbereichs von 1 bis N
// Demonstriert for-, while- und do-while-Schleifen

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
        cout << "Please enter Number  ? ";
        cin >> Num;
    } while (Num <= 0);

    return Num;
}

// Gibt den Bereich von 1 bis N mit einer for-Schleife aus
void PrintRangeFrom1toN_usingFor(int Number)
{
    cout << "Range printed using For Statement:\n";
    for (int i = 1; i <= Number; i++)
    {
        cout << i << endl;
    }
}

// Gibt den Bereich von 1 bis N mit einer while-Schleife aus
void PrintRangeFrom1toN_usingwhile(int Number)
{
    int n = 0;
    cout << "Range Printed using While Statement:\n";
    while (Number > n)
    {
        n++;
        cout << n << endl;
    }
}

// Gibt den Bereich von 1 bis N mit einer do-while-Schleife aus
void PrintRangeFrom1toN_usingDowhile(int Number)
{
    short n = 0;
    cout << "Range Printed using do..While Statment:\n";
    do
    {
        n++;
        cout << n << endl;
    } while (Number > n);
}

int main()
{
    // Ausgabe mit verschiedenen Schleifen
    PrintRangeFrom1toN_usingFor(ReadNumber());
    PrintRangeFrom1toN_usingwhile(ReadNumber());
    PrintRangeFrom1toN_usingDowhile(ReadNumber());

    return 0;
}
