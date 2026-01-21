/*
Programmname: Name einlesen und ausgeben
Beschreibung:
Dieses Programm liest den Namen des Benutzers ein
und gibt ihn anschließend auf der Konsole aus.
Verwendete Konzepte: Funktionen, Ein- und Ausgabe, Strings.
*/

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

// Liest den Namen des Benutzers von der Konsole ein
string ReadName()
{
    string Name;
    cout << "Please enter your Name?\n";
    cin >> Name;
    return Name;
}

// Gibt den übergebenen Namen auf der Konsole aus
void PrintName(string Name)
{
    cout << "Your Name is " << Name << endl;
}

int main()
{
    // Liest den Namen ein und gibt ihn aus
    PrintName(ReadName());

    return 0;
}
