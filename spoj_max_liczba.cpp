#include <iostream>
using namespace std;

int main() {
    int number;
    int max = 0;
    while (cin >> number)
    {
        if (number > max){
            max = number;
        }
        else if (number == 0)
        {
            break;
        }
        else {
            continue;
        }
        

    }
    cout << "Max " << max;
	

	return 0;
}
