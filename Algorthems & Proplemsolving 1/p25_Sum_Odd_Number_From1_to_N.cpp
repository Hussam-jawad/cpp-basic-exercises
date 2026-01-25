// Programm zur Berechnung der Summe aller ungeraden Zahlen von 1 bis N
// Liest eine Zahl ein und summiert die ungeraden Zahlen bis zu diesem Wert

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

// Enum zur Unterscheidung zwischen geraden und ungeraden Zahlen
enum enOddEven { Odd = 1, Even = 2 };

// Liest eine positive Zahl vom Benutzer ein
int RedNumber()
{
    int Number = 0;
    do
    {
        cout << "Please enter a Number \n";
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

// Prüft, ob eine Zahl ungerade oder gerade ist
enOddEven CheckOddOrEven(int Number)
{
    if (Number % 2 != 0)
        return enOddEven::Odd;
    else
        return enOddEven::Even;
}

// Berechnet die Summe aller ungeraden Zahlen von 1 bis N mit einer for-Schleife
int SumOddNumbersFrom1toN_UsingFor(int Number)
{
    int sum = 0;

    for (int i = 1; i <= Number; i++)
    {
        if (CheckOddOrEven(i) == enOddEven::Odd)
            sum += i;
    }

    return sum;
}

// Gibt die berechnete Summe aus
void PrintResult(int Sum)
{
    cout << "The sum odd Number is: " << Sum << endl;
}

int main()
{
    int Number = RedNumber();                       // Eingabe der Zahl
    int sum = SumOddNumbersFrom1toN_UsingFor(Number); // Berechnung der Summe

    PrintResult(sum);                               // Ausgabe

    return 0;
}
