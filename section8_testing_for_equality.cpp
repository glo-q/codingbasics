// Beginning C++ Programming - From Beginner to Beyond

#include <iostream>

using namespace std;

int main(){

    bool equals = false;
    bool not_equals = false;

    int num1;
    int num2;

    // cout << boolalpha; //will display true/false instead 0/1

    cout << "Give two integers to check: ";
    cin >> num1 >> num2;
    equals = (num1 == num2);
    not_equals = (num1 != num2);
    cout << endl << "Equals: " << equals << endl << "Not equals: " << not_equals << endl;


}
