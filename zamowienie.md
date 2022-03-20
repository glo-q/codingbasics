# CodeWars Python Solutions

---

## Zamowienie

### The code is done in polish because of college requirements.

### Description:

None


### Solution


```cpp
#include <iostream>

using namespace std;
 
class Zamowienie{

	private:
		string nazwa_produktu, data_zakupu;
 		float cena_produktu;
 		int ilosc_sztuk;
 	
 	public:
 		
 		void zapisz_dane(string nazwa_produktu, float cena_produktu, string data_zakupu, int ilosc_sztuk){
 			this -> nazwa_produktu = nazwa_produktu;
 			this -> cena_produktu = cena_produktu;
 			this -> data_zakupu = data_zakupu;
 			this -> ilosc_sztuk = ilosc_sztuk;
		}
		
		void wyswietl_dane(){
		 	cout << "Nazwa: " << this -> nazwa_produktu << ", cena: " << this-> cena_produktu << "PLN, data zakupu: " << this->data_zakupu << ", w ilosci: " << this -> ilosc_sztuk << "szt." << endl;
		} 
		 
		string podaj_nazwe_produktu(){
 			return this -> nazwa_produktu;
		}
		
		float podaj_cene(){
 			return this -> cena_produktu;
		}
		
		string podaj_date_zakupu(){
 			return this -> data_zakupu;
		}
		
		int podaj_liczbe_sztuk(){
 			return this->ilosc_sztuk;
		}
		
		float podaj_koszt(){
			cout << "Calkowity koszt zamowienia: ";
			return ilosc_sztuk*cena_produktu;
		}
 };
 
 int main(){
 	
 	Zamowienie z[2];
 	string produkt, data;
 	int ilosc;
 	float cena;

 	for (int i=0; i<2; i++){
 		cout << "Podaj Produkt | Cena | Data | Ilosc: \n";
 		cin >> produkt >> cena >> data >> ilosc;
 		z[i].zapisz_dane(produkt, cena, data, ilosc);
	 }

	
	int opcja;
	do{
		cout << "1. Wyswietl dane o zamowieniu\n2. Wyswietl nazwe produktu\n3. Wyswietl ceny zakupu\n4. Wyswietl date zakupu\n5. Wyswietl liczbe sztuk\n6. Podaj calkowity koszt zamowienia" << endl;
		cin >> opcja;
		
		switch(opcja){
		case 1:
			z[0].wyswietl_dane();
			z[1].wyswietl_dane();
			break;
		case 2:
			cout << "Nazwa: " << z[0].podaj_nazwe_produktu() << endl;
			cout << "Nazwa: " << z[1].podaj_nazwe_produktu() << endl;
			break;
		case 3:
			cout << "Cena: " << z[0].podaj_cene() << endl;
			cout << "Cena: " << z[1].podaj_cene() << endl;
			break;
		case 4:
			cout << "Data zakupu: " << z[0].podaj_date_zakupu() << endl;
			cout << "Data zakupu: " << z[1].podaj_date_zakupu() << endl;
			break;
		case 5:
			cout << "Ilosc: " << z[0].podaj_liczbe_sztuk() << endl;
			cout << "Ilosc: " << z[1].podaj_liczbe_sztuk() << endl;
			break;
		case 6:
			cout << "Calkowity koszt zamowienia: " << z[0].podaj_koszt() << endl;
			cout << "Calkowity koszt zamowienia: " << z[1].podaj_koszt() << endl;
			break;
						
	}
	}while(opcja != 0);

	}



```

---
### Comment



[See on CodeWars.com](https://www.codewars.com/users/ITRonin)
