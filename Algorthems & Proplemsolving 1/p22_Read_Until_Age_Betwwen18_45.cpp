// Programm zur Eingabe eines Alters innerhalb eines gültigen Bereichs
// Fordert den Benutzer so lange zur Eingabe auf, bis das Alter zwischen 18 und 45 liegt

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

// Liest ein Alter vom Benutzer ein
int ReadAge()
{
    int num;

    cout << "Please enter Age between 18 and 45 ? " << endl;
    cin >> num;

    return num;
}

// Prüft, ob eine Zahl innerhalb eines bestimmten Bereichs liegt
bool ValidatNumberInRange(int Number, int From, int To)
{
    return (Number >= From && Number <= To);
}

// Liest das Alter so lange ein, bis es im gültigen Bereich liegt
int ReadUntilAgeBetween(int From, int To)
{
    int Age = 0;

    do
    {
        Age = ReadAge();
    } while (!ValidatNumberInRange(Age, From, To));

    return Age;
}

// Gibt das gültige Alter aus
void PrintResult(int Age)
{
    cout << "Your Age is: " << Age << endl;
}

int main()
{
    PrintResult(ReadUntilAgeBetween(18, 45)); // Eingabe, Validierung und Ausgabe

    return 0;
}
