# C++ College Solutions

---

## Auta

### The code and the description is done in polish because of college requirements.

### Description:

Proszę zdefiniować następującą klasę:
• Auto – dane prywatne: producent, kolor, pojemność silnika oraz metody publiczne: konstruktor, metody zwracające wartości pól oraz metoda wyświetlająca informacje o pojemności silnika oraz nazwie producenta i kolorze samochodu;
Następnie proszę napisać program, w którym stworzone zostaną dwie tablice (statyczna i dynamiczna) z zadawaną przez użytkownika liczbą elementów (dotyczy tablicy dynamicznej) typu/klasy Auto (producent, kolor, pojemność silnika). Każdą tablicę wypełnić co najmniej 5 elementami (różne dane) i znaleźć w nich auto, które ma pojemność silnika wskazaną przez użytkownika. Wyszukiwanie auta zrealizować za pomocą funkcji przyjmującej jako argumenty tablicę obiektów i wyszukiwaną wartość. Funkcja powinna zwracać do miejsca wywołania obiekt lub obiekty (auto lub auta), którego parametry spełniają warunki wyszukiwania. Dane (pojemność, kolor, nazwa producenta) znalezionego auta wyświetlić na ekranie.



### Solution


```cpp
#include <iostream>

using namespace std;

class Auto{

    private:
        string producent, kolor;
        float pojemnosc_silnika;

    public:
        Auto(){
        }
        Auto(string producent, string kolor, float pojemnosc_silnika){
            this -> producent = producent;
            this -> kolor = kolor;
            this -> pojemnosc_silnika = pojemnosc_silnika;
        }

        string pokaz_producent(){
            return this -> producent;
            }

        string pokaz_kolor(){
            return this -> kolor;
            }

        float pokaz_poj_silnika(){
            return this -> pojemnosc_silnika;
            }
        
        void wyswietl_dane(){
		    cout << "Producent: " << this -> producent << ", kolor: " << this-> kolor << ", pojemnosc silnika: " << this -> pojemnosc_silnika << endl;
		} 

};

Auto** wyszukaj(Auto auta[], float poj, int n){
    for(int i=0; i < n; i++){
        if(auta[i].pokaz_poj_silnika() == poj){
            auta[i].wyswietl_dane();
        }
    }
};



int main(){

	int size_auta = 5;
    Auto auta_stat[size_auta];
	
    auta_stat[0] = Auto("Citroen", "Niebieski", 2.0);
    auta_stat[1] = Auto("BMW", "Czerwony", 3.0);
    auta_stat[2] = Auto("Mercedes", "Czarny", 2.4);
    auta_stat[3] = Auto("BMW", "Niebieski", 2.0);
    auta_stat[4] = Auto("Citroen", "Bialy", 1.9);

	cout << "Podaj ilosc aut ktore chcesz dodac: " << endl;
		
	int n;	
	cin >> n;
		
	Auto* auta = new Auto[n];
		
	for(int i=0; i < n; i++) {
		string prod,kol;
		float poj;
		
		cout << "Auto nr.: " << (i+1) << endl;
		cout << "Podaj producenta: " << endl;
		cin >> prod;
		cout << "Podaj kolor: " << endl;
		cin >> kol;
		cout << "Podaj pojemnosc: " << endl;
		cin >> poj;
		 
		Auto* a = new Auto(prod, kol, poj);
		auta[i] = *a;
	}


    int opcja;

	do{
		cout << "1. Wyswietl dane o aktualnie zapisanych autach\n2. Wyswietl dane o nowych pojazdach.\n3. Wyszukaj po pojemnosci\n0. Koniec"<<endl;

		cin >> opcja;
		switch(opcja){
		case 1:
            for (int i = 0; i < size_auta; i++){
                auta_stat[i].wyswietl_dane();
        }
			break;
		case 2:
            for (int i = 0; i < n; i++){
                auta[i].wyswietl_dane();
        }
			break;
		case 3:
            float poj;
            cout << "Podaj pojemnosc: ";
            cin >> poj;
            wyszukaj(auta, poj, n);
            wyszukaj(auta_stat,poj,size_auta);
            break;

    }					
	}while(opcja != 0);
	

}


```

---
### Comment



[See on CodeWars.com](https://www.codewars.com/users/ITRonin)
