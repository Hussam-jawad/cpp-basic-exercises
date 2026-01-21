// Programm zur Berechnung des Durchschnitts von drei Noten
// Ermittelt anhand des Durchschnitts, ob der Benutzer bestanden hat

#include <iostream>   // Ein- und Ausgabe
#include <cstdlib>    // Allgemeine Hilfsfunktionen
#include <string>     // String-Unterstützung

using namespace std;

// Enum zur Darstellung des Bestehens oder Nichtbestehens
enum enPassFail { Pass = 1, Fail = 2 };

// Liest drei Noten vom Benutzer ein
void ReadNumber(int& Mark1, int& Mark2, int& Mark3)
{
    cout << "Please enter Mark 1 ? " << endl;
    cin >> Mark1;

    cout << "Please enter Mark 2 ? " << endl;
    cin >> Mark2;

    cout << "Please enter Mark 3 ? " << endl;
    cin >> Mark3;
}

// Berechnet die Summe der drei Noten
int SumOf3Marks(int Mark1, int Mark2, int Mark3)
{
    return Mark1 + Mark2 + Mark3;
}

// Berechnet den Durchschnitt der drei Noten
float CalculateAverage(int Mark1, int Mark2, int Mark3)
{
    return (float)SumOf3Marks(Mark1, Mark2, Mark3) / 3;
}

// Prüft, ob der Durchschnitt bestanden oder nicht bestanden ist
enPassFail CheckAverage(float Average)
{
    if (Average <= 50)
        return enPassFail::Pass;
    else
        return enPassFail::Fail;
}

// Gibt den Durchschnitt und das Ergebnis aus
void PrintResult(float Average)
{
    cout << "\n The Average is : " << Average << endl;

    if (CheckAverage(Average) == enPassFail::Pass)
        cout << "\n You Passed" << endl;
    else
        cout << "\n You Faild" << endl;
}

int main()
{
    int Mark1, Mark2, Mark3;  // Deklaration der Noten

    ReadNumber(Mark1, Mark2, Mark3);                 // Eingabe der Noten
    PrintResult(CalculateAverage(Mark1, Mark2, Mark3)); // Berechnung und Ausgabe

    return 0;
}
