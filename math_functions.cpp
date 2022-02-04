#include <bits/stdc++.h>

using namespace std;

bool isPrime(int);

int main(){
	
	int n;
	cout << "Podaj wielkosc tablicy - n\n";
	cin >> n;
	int tab[n];
	for(int i=0; i<n; i++){
		cout<<"Podaj wartosc elementu tablicy: ";
		cin>>tab[i];
	}
	cout << endl;
	cout << "Twoja Tablica: " << endl << endl;
	for (int i=0; i<n; i++){
		cout << tab[i] << " ";
	}
	int suma = 0;
	for (int i=0; i<n; i++){
		suma += tab[i];
	}
	cout << endl << endl;
	cout << "Srednia elementow tablicy to: " << suma/n << endl;	
	cout << "Suma elementow tablicy to: " << suma << endl;
	int suma2;
	int kwadrat;
	for (int i=0; i<n; i++){
		kwadrat = tab[i]*tab[i];
		suma2 += kwadrat;
	}	
	cout << "Suma kwadratow elementow tablicy to: " << suma2 << endl << endl;	
	// Zadanie 2
	cout << "Pseudolosowa tablica z 10 znakow:" << endl;
	int tab2[10];
	vector <int> news;
	srand(time(0));
	int max;
	for(int i=0; i<10; i++){
		tab2[i] = rand()%100+4;
		cout << tab2[i] << " ";}
	cout << endl << endl;
	int z;
	for(int j=0; j<10; j++){
		if ((isPrime(tab2[j])) && (max < tab2[j])){
			max = tab2[j];
			}}
			
	cout << max << " jest najwieksza liczba pierwsza!";
}


bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
  
    if (n % 2 == 0 || n % 3 == 0)
        return false;
  
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
  
    return true;
}
