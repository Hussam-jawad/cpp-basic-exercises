// Programm zur Überprüfung, ob eine Zahl ungerade ist
// Liest eine Zahl ein und gibt aus, ob sie ungerade (Odd) ist

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

// Liest eine Zahl vom Benutzer ein
int ReadNumber()
{
    int num;
    cout << "Please enter a number ? " << endl;
    cin >> num;
    return num;
}

// Prüft, ob die Zahl ungerade ist
bool IsOdd(int num)
{
    return (num % 2 != 0);  // True, wenn Rest bei Division durch 2 ungleich 0
}

// Gibt das Ergebnis aus
void PrintResult(int num)
{
    if (IsOdd(num))
        cout << "\nThe number " << num << " is Odd." << endl;
    else
        cout << "\nThe number " << num << " is Even." << endl;
}

int main()
{
    int number = ReadNumber();  // Zahl einlesen
    PrintResult(number);        // Ergebnis prüfen und ausgeben

    return 0;
}
