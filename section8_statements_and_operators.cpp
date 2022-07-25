// Beginning C++ Programming - From Beginner to Beyond

#include<iostream>

using namespace std;

int main(){

    cout << "Give the amount in cents" << endl;
    int amount;
    cin >> amount;
    cout << "Dollars:       " << amount/100 << endl;
    cout << "Quarters:      " << (amount%100)/25 << endl;
    cout << "Dimes:         " << (amount%50)/10 << endl;
    cout << "Nickels        " << (amount%20)/5 << endl;
    cout << "Pennies:       " << amount%5 << endl;
}
