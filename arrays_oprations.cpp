#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

void wyswietl(int **tab, int kol, int rzed) 
{
	for(int i=0;i<kol;i++){
		{for(int j=0;j<rzed;j++)
			if (tab[i][j]<0)
			{
		    	cout<<tab[i][j]<<" ";
			}
			else
			{
			cout << " "<<tab[i][j]<<" ";
			}
		}
		cout << endl;
}
	
}

void parzyste(int **tab, int kol, int rzed){
    
    cout << "Parzyste: ";
    	for(int i=0;i<kol;i++){
		{for(int j=0;j<rzed;j++)
		if (tab[i][j]%2==0)
		{
		    cout << tab[i][j]<<" ";
		}
		
		}
    
        }
}

void roznica(int **tab, int kol, int rzed){
	int score;
	for(int i=0; i<kol; i++){
    	for(int j=0;j<rzed;j++){
        	if(j==0){
      			score= tab[i][j];
				}
   			else{
    			score = score - tab[i][j];
				}
        }
    cout <<"Kolumna" << i << ": "<< score << endl;
	}
}

int przekatne(int **tab, int kol, int rzed){
	cout << "Suma przekatnych jest rowna: ";
	
    int suma=0;
	for (int i=0 ;i<kol;i++){
		suma +=tab[i][i];
	}
	for (int i=0 ;i<kol;i++){
		suma +=tab[(kol-1)-i][(kol-1)-i];
	}
	return suma;
	
}

void trans(int**tab, int kol, int rzed){
    cout << "Po transpozycji: " << endl;
	for(int i=0; i<rzed; i++){
		for(int j=0;j<kol;j++)
			cout << tab[j][i] << "  ";
		cout << endl;
		
	}
}

void zwolnij(int **tab,int kol){
    
    for ( int i=0; i < kol; ++i )
    {
         delete [] tab[i];
    } 
 
delete [] tab; 
}
int main()
{
    int kol,rzed,opcja;
    do {
		cout << "Podaj ilosc kolumn tablicy \n";
		cin >> kol;
	} while(kol<3 || kol>7);
	cout << endl;
	do {
		cout << "Podaj ilosc rzedow tablicy \n";
		cin >> rzed;
	} while(rzed<3 || rzed>7);
	
  int **tablica = new int *[kol];
	for(int i=0;i<kol;i++)
		tablica[i] = new int [rzed];
		
		for(int i=0;i<kol;i++)
		for(int j=0;j<rzed;j++)
			tablica[i][j] = rand()%19-9;
			
			 wyswietl(tablica,kol,rzed);
			 cout<<endl;
  
  
    do{
        	cout << "\n1. Wyswietl wartosci parzyste\n2. Suma wartosci na obu przekatnych\n3. Macierz transponowana\n4. Roznica elementow J-kolumny macierzy\n";
        	cin>>opcja;
        	
        	switch(opcja){
		case 1:
			parzyste(tablica,kol,rzed);
			break;
		case 2:
		
			cout<<przekatne(tablica,kol,rzed);
			break;
		case 3:
			trans(tablica,kol,rzed);
			break;
		case 4:
			roznica(tablica,kol,rzed);
			break;
		case 0:
		    cout << "Koniec"<<endl;
		    break;
		default:
			cout << "Bledny wybor!";
			break;
	}
    }while(opcja!=0);
        
    zwolnij(tablica,kol);
        
         
}
