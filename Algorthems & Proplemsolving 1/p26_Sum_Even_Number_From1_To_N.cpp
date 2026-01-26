// Programm zur Berechnung der Summe aller geraden Zahlen von 1 bis N
// Die Summe wird mit drei verschiedenen Schleifen berechnet:
// while-Schleife, do...while-Schleife und for-Schleife

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

// Enum zur Unterscheidung zwischen geraden und ungeraden Zahlen
enum enOddOrEven { Odd = 1, Even = 2 };

// Liest eine positive Zahl vom Benutzer ein
// Die Eingabe wird so lange wiederholt, bis eine Zahl größer als 0 eingegeben wird
int ReadPositiveNumber()
{
	int Num = 0;
	do
	{
		cout << "Please enter a Number ? \n";
		cin >> Num;

	} while (Num <= 0);

	return Num;
}

// Prüft, ob eine Zahl gerade oder ungerade ist
// Rückgabewert: Even bei gerader Zahl, Odd bei ungerader Zahl
enOddOrEven CheckOddOrEven(int Number)
{
	if (Number % 2 == 0)
		return enOddOrEven::Even;
	else
		return enOddOrEven::Odd;
}

// Berechnet die Summe aller geraden Zahlen von 1 bis N
// Verwendung einer while-Schleife
int SumEvenNumbersFrom1toN_UsingWhile(int N)
{
	int count = 0; // Zähler von 1 bis N
	int sum = 0;   // Speichert die Summe der geraden Zahlen

	cout << "Sum even Numbers using While Statement:\n";
	while (count < N)
	{
		count++;

		// Prüfen, ob die aktuelle Zahl gerade ist
		if (CheckOddOrEven(count) == enOddOrEven::Even)
			sum += count;
	}

	return sum;
}

// Berechnet die Summe aller geraden Zahlen von 1 bis N
// Verwendung einer do...while-Schleife
int SumEvenNumbersFrom1toN_UsingDO_While(int N)
{
	int count = 0; // Zähler von 1 bis N
	int sum = 0;   // Speichert die Summe der geraden Zahlen

	cout << "Sum even Numbers using Do...While Statement:\n";
	do
	{
		count++;

		// Prüfen, ob die aktuelle Zahl gerade ist
		if (CheckOddOrEven(count) == enOddOrEven::Even)
			sum += count;

	} while (count < N);

	return sum;
}

// Berechnet die Summe aller geraden Zahlen von 1 bis N
// Verwendung einer for-Schleife
int SumEvenNumbersFrom1toN_Using_For(int N)
{
	int sum = 0; // Speichert die Summe der geraden Zahlen

	cout << "Sum even Numbers using For Statement:\n";
	for (int i = 1; i <= N; i++)
	{
		// Prüfen, ob die aktuelle Zahl gerade ist
		if (CheckOddOrEven(i) == enOddOrEven::Even)
			sum += i;
	}
	return sum;
}

int main()
{
	int Number = 0;

	// Einlesen der positiven Zahl
	Number = ReadPositiveNumber();

	// Ausgabe der Ergebnisse mit verschiedenen Schleifen
	cout << SumEvenNumbersFrom1toN_UsingWhile(Number) << endl;
	cout << SumEvenNumbersFrom1toN_UsingDO_While(Number) << endl;
	cout << SumEvenNumbersFrom1toN_Using_For(Number) << endl;

	return 0;
}
