#include<iostream>
using namespace std;

int main(){
    int num1, num2, score;
    char sign;
    while (cin >> sign >> num1 >> num2){
        switch (sign)
        {
        case '+':
            score = num1 + num2;
            break;

        case '-':
            score = num1 - num2;
            break;

        case '*':
            score = num1 * num2;
            break;

        case '/':
            score = num1 / num2;
            break;

        case '%':
            score = num1 % num2;
        }
        cout << score << endl; 
    }

    return 0;
}
