#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    // definiuje trzy liczby rzeczywiste oraz niewiadoma
    double a, b, c, x;
    cin >> a >> b >> c;
    // jesli a bedzie rozne od zera bedzie jak wyliczyc x
    if (a != 0)
    {
        x = (c - b) / a;
        cout << fixed << setprecision(2) << x << endl;
    }
    // nieskonczenie wiele rozwiazan
    if ((c - b) == 0)
    {
        cout << "NWR";
    }
    // brak rozwiazania
    if (((c -b) != 0) && a == 0)
    {
        cout << "BR";
    }

    return 0;
    

}
