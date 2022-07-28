#include<iostream>
using namespace std;

int main(){
    int num_of_cities, profit;
    long int sum = 0, max = 0;
    cin >> num_of_cities;
    for(int i=1; i <= num_of_cities; i++){
        cin >> profit;
        sum += profit;
        if (sum>max){
            max = sum;
        }
        if (sum < 0){
            sum = 0;
        }
    }

    cout << max << endl;
    return 0;
}

