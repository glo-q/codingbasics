#include <iostream>
using namespace std;

int main()
{
  int max, max_pos;
	int min, min_pos;
	int i, t;
	cin >> t;
	max = min = t;
	max_pos = min_pos = i = 1;
	while (cin >> t) {
		++i;
		if (t < min)
		{
			min = t;
			min_pos = i;
		}
		else if (max <= t)
		{
			max = t;
			max_pos = i;
		}
	}
  cout << min << endl;
  cout << min_pos << endl;
  cout << max << endl;
  cout << max_pos << endl;
}
