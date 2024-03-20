#include <iostream>
using namespace std;

struct ksiegarnia
{
	string tytul;
	string autor;
	string rok;
	string wydawnictwo;
	string cena;
};

Ksiegarnia ksiazki[ 7 ] =
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

void print_book(int pozycja, ksiegarnia *table)
{
	cout << "Tytul: "<< table[pozycja].tytul <<" Autor: "<< table[pozycja].autor << "Rok: "<< table[pozycja].rok_wyd <<"Wydawnictwo: "<<table[pozycja].wydawnictwo<< "Cena:"<< table[pozycja].cena<<endl;
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
		cout <<
	}
}