// ConsoleApplication1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

int i, j;
int szerokosc = 0, wysokosc = 0;

int main()
{
	
	cout << "Podaj szerokosc:\n";

	cin >> szerokosc;

	//int wysokosc;
	cout << "Podaj wysokosc:\n";

	cin >> wysokosc;

	for (i = 0; i < wysokosc; ++i) {
		for (j = 0; j < szerokosc; ++j) {

			if (i == 0 || i == (wysokosc - 1)) {
				cout << "-";
			}
			else {
				if (j == 0 || j == (szerokosc - 1))
				{
					cout << "|";
				}
				else {
					if (j % 2 == 0)
					{
						cout << "#";
					}
					else {
						cout << "*";
					}
				}
			}

		}
		cout << "\n";
	}

}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
