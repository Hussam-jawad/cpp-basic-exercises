/*
Programmname: Prüfung bestanden oder nicht
Beschreibung:
Dieses Programm liest eine Prüfungsnote vom Benutzer ein
und überprüft, ob die Note bestanden oder nicht bestanden ist.
Das Ergebnis wird anschließend auf der Konsole ausgegeben.
Verwendete Konzepte: Enum, Funktionen, Bedingungen, Ein- und Ausgabe.
*/

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

// Enum zur Darstellung von Bestehen oder Durchfallen
enum enPassFail { Pass = 1, Fail = 2 };

// Liest die Note vom Benutzer ein
int ReadMark()
{
    int Number = 0;

    cout << "Please enter a Number ? \n";
    cin >> Number;

    return Number;
}

// Prüft, ob die Note bestanden ist oder nicht
enPassFail checkMark(int number)
{
    if (number >= 50)
        return enPassFail::Pass;
    else
        return enPassFail::Fail;
}

// Gibt das Ergebnis (Bestanden oder Nicht bestanden) aus
void PrintResult(int Mark)
{
    if (checkMark(Mark) == enPassFail::Pass)
        cout << "You Passed" << endl;
    else
        cout << "You Faild" << endl;
}

int main()
{
    // Liest die Note ein und überprüft das Ergebnis
    enPassFail result = checkMark(ReadMark());

    // Gibt das Ergebnis auf der Konsole aus
    PrintResult(result);

    return 0;
}
