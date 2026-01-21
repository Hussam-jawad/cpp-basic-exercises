/*
Programmname: Bewerberannahme prüfen
Beschreibung:
Dieses Programm liest Informationen über eine Person ein
und entscheidet, ob sie angenommen wird oder nicht.
Die Entscheidung basiert auf Alter, Führerschein und Empfehlung.
Verwendete Konzepte: Structs, Funktionen, Bedingungen (if/else).
*/

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

// Struktur zur Speicherung der Bewerberinformationen
struct stInfo
{
    int Age;
    bool HasDrivingLicense;
    bool HasRecommendation;
};

// Liest die Informationen des Benutzers von der Konsole ein
stInfo ReadInfo()
{
    stInfo Info;

    cout << "Please Enter your Age? " << endl;
    cin >> Info.Age;

    cout << "Do you have driver License 1 or 0 ? " << endl;
    cin >> Info.HasDrivingLicense;

    cout << "Do you Have recommendation? " << endl;
    cin >> Info.HasRecommendation;

    return Info;
}

// Prüft, ob der Bewerber akzeptiert wird
bool IsAccepted(stInfo Info)
{
    // Wenn eine Empfehlung vorhanden ist, wird der Bewerber akzeptiert
    if (Info.HasRecommendation)
        return true;
    else
        // Ansonsten muss das Alter mindestens 21 sein und ein Führerschein vorhanden sein
        return (Info.Age >= 21 && Info.HasDrivingLicense);
}

// Gibt das Ergebnis (Hired oder Rejected) auf der Konsole aus
void PrintResult(stInfo Info)
{
    if (IsAccepted(Info))
        cout << "\nHired" << endl;
    else
        cout << "\nRejected" << endl;
}

int main()
{
    // Liest die Bewerberdaten ein und gibt das Ergebnis aus
    PrintResult(ReadInfo());

    return 0;
}
