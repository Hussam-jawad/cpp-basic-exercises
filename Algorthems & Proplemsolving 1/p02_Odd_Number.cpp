/*
Programmname: Gerade oder Ungerade Zahl prüfen
Beschreibung:
Dieses Programm liest eine positive Zahl vom Benutzer ein
und prüft, ob die Zahl gerade oder ungerade ist.
Verwendete Konzepte: Enums, Funktionen, Schleifen, Bedingungen.
*/

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

// Enum zur Darstellung, ob eine Zahl gerade oder ungerade ist
enum enOddOrEven
{
    odd = 1,
    Even = 2
};

// Liest eine positive Zahl vom Benutzer ein
int ReadPositiveNumber(string Message)
{
    int Number = 0;

    do
    {
        cout << Message;
        cin >> Number;

    } while (Number <= 0);

    return Number;
}

// Prüft, ob die Zahl gerade oder ungerade ist
enOddOrEven checkNumber(int Number)
{
    if (Number % 2 == 0)
        return enOddOrEven::Even;

    return enOddOrEven::odd;
}

// Gibt das Ergebnis auf der Konsole aus
void Printgesult(enOddOrEven Number)
{
    if (Number == enOddOrEven::Even)
        cout << "\nThe Number is Even\n";
    else
        cout << "\nThe Number is Odd\n";
}

int main()
{
    // Liest die Zahl ein, prüft sie und gibt das Ergebnis aus
    int Number = ReadPositiveNumber("Please enter a Positive Number ? ");
    Printgesult(checkNumber(Number));

    return 0;
}
