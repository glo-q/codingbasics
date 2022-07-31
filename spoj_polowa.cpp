#include<iostream>
#include<string>
using namespace std;

int main(){
    string text;
    int number;
    cin >> number;
    while (number--){
        cin >> text;
        int len = text.length();
        cout << text.substr(0, len/2) << endl;
        
    }
}
