#include <iostream>
using namespace std;

void rozklad(int a) {
	int b = 2;
	
	while (a > 1) {
		while (a % b == 0) {
			cout << b << " ";
			a = a / b;
		}
		b = b + 1;
	}
	
	cout << endl;
	
}

int main() {
	int liczba;
	cout << "Podaj liczbe: ";
	cin >> liczba;
	cout << "Czynniki pierwsze liczby " << liczba <<": ";
	rozklad(liczba);
	return 0;
}