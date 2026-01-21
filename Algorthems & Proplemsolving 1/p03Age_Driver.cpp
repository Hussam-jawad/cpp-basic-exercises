/*
Programmname: Bewerberannahme anhand von Alter und Führerschein
Beschreibung:
Dieses Programm liest Informationen über eine Person ein
und entscheidet, ob sie angenommen wird.
Die Entscheidung basiert auf dem Alter und dem Besitz eines Führerscheins.
Verwendete Konzepte: Structs, Funktionen, Bedingungen (if/else).
*/

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

// Struktur zur Speicherung der Informationen
struct stInfo
{
    int Age;
    bool HasDrivingLicense;
};

// Liest die Benutzerdaten von der Konsole ein
stInfo ReadInfo()
{
    stInfo Info;

    cout << "Please Enter your Age? " << endl;
    cin >> Info.Age;

    cout << "Do you have driver License 1 or 0 ? " << endl;
    cin >> Info.HasDrivingLicense;

    return Info;
}

// Prüft, ob die Person akzeptiert wird
bool IsAccepted(stInfo Info)
{
    return (Info.Age >= 21 && Info.HasDrivingLicense);
}

// Gibt das Ergebnis auf der Konsole aus
void PrintResult(stInfo Info)
{
    if (IsAccepted(Info))
        cout << "\nHired" << endl;
    else
        cout << "\nRejected" << endl;
}

int main()
{
    // Liest die Daten ein und gibt das Ergebnis aus
    PrintResult(ReadInfo());

    return 0;
}
