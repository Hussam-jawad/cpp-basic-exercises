// Programm zur Überprüfung, ob ein Alter in einem gültigen Bereich liegt
// Liest das Alter ein und prüft, ob es zwischen 18 und 45 liegt

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

// Liest das Alter vom Benutzer ein
int ReadAge()
{
    int num;

    cout << "Please enter Age ? " << endl;
    cin >> num;

    return num;
}

// Prüft, ob eine Zahl innerhalb eines bestimmten Bereichs liegt
bool ValidatNumberInRange(int Number, int From, int To)
{
    return (Number >= From && Number <= To);
}

// Gibt aus, ob das Alter gültig ist
void PrintResult(int Age)
{
    if (ValidatNumberInRange(Age, 18, 45))
        cout << Age << " is a valid age \n";
    else
        cout << Age << " is a invalid age \n";
}

int main()
{
    PrintResult(ReadAge()); // Eingabe, Prüfung und Ausgabe

    return 0;
}
