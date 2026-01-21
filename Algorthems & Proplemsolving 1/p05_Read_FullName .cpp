/*
Programmname: Vollständigen Namen anzeigen
Beschreibung:
Dieses Programm liest den Vor- und Nachnamen des Benutzers ein,
kombiniert beide zu einem vollständigen Namen und gibt ihn
auf der Konsole aus.
Verwendete Konzepte: Structs, Funktionen, Strings, Ein- und Ausgabe.
*/

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

// Struktur zum Speichern von Vor- und Nachname
struct stInfo
{
    string FirstName;
    string LastName;
};

// Liest Vor- und Nachnamen vom Benutzer ein
stInfo ReadName()
{
    stInfo Info;

    cout << "Please enter a FirstName ? \n";
    cin >> Info.FirstName;

    cout << "Please enter a LastName ? \n";
    cin >> Info.LastName;

    return Info;
}

// Erstellt den vollständigen Namen aus Vor- und Nachname
string GetFullName(stInfo Info)
{
    string FullName;

    FullName = Info.FirstName + " " + Info.LastName;

    return FullName;
}

// Gibt den vollständigen Namen auf der Konsole aus
void PrintName(string FullName)
{
    cout << "\t\t" << FullName;
}

int main()
{
    // Liest den Namen, erstellt den vollständigen Namen und gibt ihn aus
    PrintName(GetFullName(ReadName()));

    return 0;
}
