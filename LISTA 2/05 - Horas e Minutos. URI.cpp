// 1300 - Horas e Minutos. 18/04/2018
#include <iostream>

using namespace std;

int main()
{
	int ang;
	while(cin >> ang)
	{
		if (ang % 6 == 0)
			cout << "Y" << endl;
		else
			cout << "N" << endl;
	}

	return 0;
}

