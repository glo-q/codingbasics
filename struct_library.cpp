#include<iostream>
#include<string>

using namespace std;


struct Plyty{
	int id;
	char tytul[20];
	char zespol[20];
	int Rok_w;
}plyty[20];

Plyty dodajPlyte();
void wyswietlPlyty(Plyty[], int);
void wyszukajZespol(Plyty[], int);
void wyszukajRok(Plyty[], int);


int main(){
	int num, opcja;
	cout << "Ile plyt chcesz dodac? ";
	cin >> num;
	for (int i = 0; i<num; i++){
		plyty[i] = dodajPlyte();
	}
	do{
	cout << endl << endl << "1. Wyswietl wsystkie plyty\n2. Wyszukaj po zespole\n3. Wyszukaj po roku wydania\n0. Koniec\n\n";
	cin >> opcja;
	switch(opcja){
		case 1:
			wyswietlPlyty(plyty, num);
			break;
		case 2:
			wyszukajZespol(plyty, num);
			break;
		case 3: 
			wyszukajRok(plyty, num);
			break;
		case 0:
		    cout << "Koniec" << endl;
		    break;
		default:
			cout << "Bledny wybor!";
			break;
			
	}
	}while(opcja != 0);


}

Plyty dodajPlyte(){
	Plyty nowa;
	cout << "Podaj id: "; cin >> nowa.id;
	cout << "Podaj tytul: "; cin >> nowa.tytul;
	cout << "Podaj zespol: "; cin >> nowa.zespol;
	cout << "Podaj rok wydania: "; cin >> nowa.Rok_w;
	return nowa;
}

void wyswietlPlyty(Plyty nowa[], int num){
	for (int i = 0; i < num; i++){
		cout << nowa[i].id << " " << nowa[i].tytul << " " << nowa[i].zespol << " " << nowa[i].Rok_w << endl;
	}
}

void wyszukajZespol(Plyty nowa[], int num){
	string nazwa;
	cout << "Jaki zespol chcesz wyszukac?";
	cin >> nazwa;
	for (int i = 0; i < num; i++){
		if (nowa[i].zespol == nazwa){
			cout << nowa[i].id << " " << nowa[i].tytul << " " << nowa[i].zespol << " " << nowa[i].Rok_w << endl;
		}

	}
}

void wyszukajRok(Plyty nowa[], int num){
	int rok;
	cout << "Po jakim roku wydania chcesz wyszukac? ";
	cin >> rok;
	for (int i = 0; i < num; i++){
		if (nowa[i].Rok_w == rok){
			cout << nowa[i].id << " " << nowa[i].tytul << " " << nowa[i].zespol << " " << nowa[i].Rok_w << endl;
		}

	}
}



