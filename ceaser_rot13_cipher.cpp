//Zdefiniuj program realizujacy zadanie zaszyfrowania i odszyfrowania wpisanego znaku szyfrem ROT 19
//Zdefiniuj program realizujacy zadanie zaszyfrowania i odszyfrowania wpisanego znaku szyfrem Cezara.


#include <iostream>
#include <algorithm> //funkcja transform


using namespace std;

void cipher(string &word, int key) //szyfrowanie
{
	for(int i=0; i<word.length(); i++)
	{
		word[i]+=key;
		if(word[i]>'Z')
			word[i]-=26;
	}
}

void decipher(string &word, int key) //deszyfrowanie
{
	for(int i=0; i<word.length(); i++)
	{
		word[i]-=key;
		if(word[i]>'Z')
			word[i]-=26;
		if(word[i]<'A')
			word[i]+=26;
	}
}
	
int main()
{
	cout << "Choose: 1 to use Ceasar Cipher, choose:2 to use ROT19\n";//opcja zmiany klucza
	int code;
	cin >> code;
	int key=0;

	if (code==1){
		key=3;
	}
	else if (code==2){
		key=19;
	}
	else {
		cout << "Wrong choice, bye...";
	}

	
	string word;
	string choice;
	cout << "Want to encrypt or decrypt?\n";
	cin >> choice;
	if (choice=="encrypt"){
			cout << "Give phrase to encrypt: \n";
			cin >> word;
			transform(word.begin(), word.end(), word.begin(), ::toupper);//zmieniam wszystko przed funkcja na wielkie litery
			cipher(word, key);
			cout << word << endl;
	}
	else if (choice=="decrypt"){
				cout << "Give phrase to decrypt: \n";
				cin >> word;
				transform(word.begin(), word.end(), word.begin(), ::toupper);//zmieniam wszystko przed funkcja na wielkie litery
				decipher(word, key);
				cout << word << endl;
	}
	else{
		cout << "Wrong choice, bye...";
	}

	system("PAUSE");
	return 0;
	
}
