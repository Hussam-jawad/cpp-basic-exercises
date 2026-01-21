/*
Programmname: Durchschnitt berechnen
Beschreibung:
Dieses Programm liest mehrere Zahlen in ein Array ein,
berechnet deren Durchschnitt und gibt das Ergebnis
auf der Konsole aus.
Verwendete Konzepte: Arrays, Schleifen, Funktionen, Ein- und Ausgabe.
*/

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

// Liest mehrere Zahlen in ein Array ein
void ReadAverage(int arr[100], int Length)
{
    for (int i = 0; i < Length; i++)
    {
        cout << "enter average [" << i + 1 << "] ?" << endl;
        cin >> arr[i];
    }
}

// Berechnet den Durchschnitt der Zahlen im Array
float CalculateAverage(int arr[100], int Length)
{
    float SumAverage = 0;

    for (int i = Length - 1; i >= 0; i--)
    {
        SumAverage += arr[i];
    }

    return (float)SumAverage / Length;
}

int main()
{
    int Length = 3;
    int arr[100];

    // Liest die Werte ein
    ReadAverage(arr, Length);

    // Berechnet und gibt den Durchschnitt aus
    cout << "Your Average is: " << CalculateAverage(arr, Length);

    return 0;
}
