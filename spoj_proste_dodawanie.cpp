#include<iostream>
using namespace std;

int main(){
    int test;
    cin >> test;
    while (test--){
        int amount, num, sum=0;
        cin >> amount;
        for(int i=0; i < amount; i++){
            cin >> num;
            sum += num;
        }
        cout << sum << endl;
    }
}
