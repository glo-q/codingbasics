//Pobrac liczbe calkowita. Jesli nie miesci sie w przedziale od 0 do 999 -- wypisac komunikat o bledzie.
//W przeciwnym razie wypisac kolejno cyfre jej setek, dziesiatek i jednosci.
//Napisac program, ktory pobiera od uzytkownika liczby rzeczywiste a i b i rozwiazuje równanie liniowe ax+b=0. Uwaga: nalezy rozpatrzec wszystkie przypadki specjalne!
//Napisac program, ktory pobiera od uzytkownika dlugosc promienia i wyswietla pole i obwód kola o podanym promieniu — o ile promien nie jest ujemny (w takim wypadku komunikat o bledzie).
//Napisac program sprawdzajacy czy podany znak jest samogloska, spólgloska czy innym znakiem
//Napisac program obliczajacy podatek w zaleznosci od wprowadzonej wartosci vat. Wartosc wprowadzamy jako typ calkowity

#include<iostream>

using std::cout;
using std::cin;

// DO CIAGU FIBONNACIEGO, zad2
unsigned int fib(int a)
{
	if(a == 0)
		return 0;
	if(a==1)
		return 1;
	return fib(a-1)+fib(a-2);
}

// ****************
// zad1
int main(int, char**){
	
	int n=0;
	int m=0;
	cout << "Podaj dwie dodatnie liczby calkowite n i m, wynikiem w kolejnych beda wszystkie dodatnie wielokrotnosci n mniejsze od m.\n";
	do {
		cout << "Piewsza liczba?\n";
		cin >> n;
	} while(n<1);
	do {
		cout << "Druga liczba?\n";
		cin >> m;
	} while(m<1);
	cout << "Wynik: \n";
	for(int x = 1; x*n<m; x++){
		cout << n*x << "\n";
	}
	
	//********************
	//ZADANIE CIAG FIBONNACCIEGO
	int fibo;
	cout << "Podaj dlugosc ciagu Fibonnacciego :";
	cin >> fibo;
	for(int i=0; i<=fibo; i++)
		cout <<fib(i) << ", ";
	cout << "\n";
	//KONIEC
	//zad3
	int i;
	double baz = 0;
	cout << "Podaj kwote bazowa\n";
	cin >> baz;
	int days;
	do {
		cout << "Podaj ilosc dni\n";
		cin >> days;
	} while(days>14);
	
	for(i=0; i<days;i++) {
		baz *=1.15;
		cout << baz << "\n";
	}

	
	
	
	
	
	system("PAUSE");
	return 0;
}
