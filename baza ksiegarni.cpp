#include <iostream>
using namespace std;

 #define TABLE_SIZE 7

struct ksiegarnia
{
	string tytul;
	string autor;
	string rok;
	string wydawnictwo;
	string cena;
};

Ksiegarnia ksiazki[TABLE_SIZE] =
{
    { "Tytul1", "autor1", 1925, "Helion1", 23.54 },
    { "Tytul2", "autor2", 1926, "Helion2", 24.54 },
    { "Tytul3", "autor1", 1927, "Helion3", 25.54 },
    { "Tytul4", "autor2", 1928, "Helion1", 26.54 },
    { "Tytul5", "autor1", 1921, "Helion2", 27.54 },
    { "Tytul6", "autor2", 1930, "Helion3", 28.54 },
    { "Tytul7", "autor1", 1931, "Helion1", 29.54 },
};

int wybor = 0;
int rok = 0;
double cena_ks = 0;
string wydawnictwo_ks = "";

void print_book(int pozycja, Ksiegarnia *table)
{
	cout << "Tytul: "<< table[pozycja].tytul <<" Autor: "<< table[pozycja].autor << "Rok: "<< table[pozycja].rok_wyd <<"Wydawnictwo: "<<table[pozycja].wydawnictwo<< "Cena:"<< table[pozycja].cena<< endl;
}

void search_book(int*rok_wyd, Ksiegarnia *table_)
{
	for(int = 0; i <TABLE_SIZE; i++)
	{
		if(table_[i].rok_wyd > *rok_wyd) print_book(i, table_);
	}
}

void search_book(double *cena_ks, Ksiegarnia *table_);
{
	for(int = 0; i <TABLE_SIZE; i++)
	{
		if(table_[i].cena > *cena_ks) print_book(i, table_);
	}
}

void search_book(string *wyd, Ksiegarnia *table_);
{
	for(int = 0; i <TABLE_SIZE; i++)
	{
		if(table_[i].wydawnictwo == *wyd) print_book(i, table_);
	}
}

int main()
{
	cout << "Witaj w ksiegarni" << endl;
	while(1)
	{
    cout << "Po jakiej kategorii chcialbys wyszukac ksiazke:" << endl;
    cout << "1. Rok wydania" << endl;
    cout << "2. Cena" << endl;
    cout << "3. Wydawnictwo" << endl;
    cout << "0. Wyjscie" << endl;
    
    cin >> wybor;
    
    switch ( wybor)
    {
        case 1:
            cout << "Podaj od jakiego roku chcesz zobaczyc ksiazki:";
            cin >> rok;
            search_book(&rok, ksiazki);
            break;
        case 2:
            cout << "Podaj cene minimalna:";
            cin >> cena_ks;
            search_book(&cena_ks, ksiazki);
            break;
        case 3: 
            cout << "Podaj wydawnictwo:";
            cin >> wydawnictwo_ks;
            search_book(&wydawnictwo_ks, ksiazki);
            break;
        case 0:
            return 0;
        default: 
            
            break;
    }   
    cout << endl;
    
 }
    return 0;
}
	
