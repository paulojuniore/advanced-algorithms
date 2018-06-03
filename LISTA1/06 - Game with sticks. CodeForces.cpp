// 451A - Game with sticks.
#include <iostream>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int num = min(n, m);
	if(num % 2 == 0)
		cout << "Malvika" << endl;
	else
		cout << "Akshat" << endl;
		
	return 0;
}
